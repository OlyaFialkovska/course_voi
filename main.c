#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include "menu.h" //Include header file "menu.h"
void GotoXY(int X, int Y)
{
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = { X, Y };
    SetConsoleCursorPosition(hStdOut, coord);
}
//Changes the color palette of the text in the console.
void colour(int i)
{
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut,i);
}
//Sets the visibility of the cursor in the console and its size
void ConsoleCursorVisible(int show, short size)//the visibility of the cursor
{
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO structCursorInfo;
    GetConsoleCursorInfo(hStdOut, &structCursorInfo);
    structCursorInfo.bVisible = show;
    structCursorInfo.dwSize = size;
    SetConsoleCursorInfo(hStdOut, &structCursorInfo);
}
int main()
{
    int select1;
    char ch = '3';
    float f;

    initialization_memory();
    while (ch == '3')
    {
        system("cls");
        printf("\tMenu:\n");
        printf("1. Exchange2 Vector direct\n");
        printf("2. Exchange2 Vector random\n");
        printf("3. Exchange2 Vector back\n");

        printf("4. Select3 Vector direct\n");
        printf("5. Select3 Vector random\n");
        printf("6. Select3 Vector back\n");

        printf("7. Shell_1 Vector direct\n");
        printf("8. Shell_1 Vector random\n");
        printf("9. Shell_1 Vector back\n");

        printf("10. Exchange2 3D direct\n");
        printf("11. Exchange2 3D random\n");
        printf("12. Exchange2 3D back\n");

        printf("13. Select3 3D direct\n");
        printf("14. Select3 3D random\n");
        printf("15. Select3 3D back\n");

        printf("16. Shell_1 3D direct\n");
        printf("17. Shell_1 3D random\n");
        printf("18. Shell_1 3D back\n");

        printf("19. Vector Table\n");
        printf("20. 3D Table\n");
        printf("21. Exit\n");
        printf("Choose your option: ");
        scanf("%d", &select1);
        ch = '2';

        switch (select1)
        {
        case 1:
            Exchange2_arr(1);
            f = MeasurementProcessing();
            printf("%f",f);
            printf("\npress any key for continue");
            _getch();
            main();
            break;
        case 2:
            Exchange2_arr(2);
            f = MeasurementProcessing();
            printf("%f",f);
            printf("\npress any key for continue");
            _getch();
            main();
            break;
        case 3:
            Exchange2_arr(3);
            f = MeasurementProcessing();
            printf("%f",f);
            printf("\npress any key for continue");
            _getch();
            main();
            break;


        case 4:
            Select3(1);
            f = MeasurementProcessing();
            printf("%f",f);
            printf("\npress any key for continue");
            _getch();
            main();
            break;
        case 5:
            Select3(2);
            f = MeasurementProcessing();
            printf("%f",f);
            printf("\npress any key for continue");
            _getch();
            main();
            break;
        case 6:
            Select3(3);
            f = MeasurementProcessing();
            printf("%f",f);
            printf("\npress any key for continue");
            _getch();
            main();
            break;


        case 7:
            Shell_1(1);
            f = MeasurementProcessing();
            printf("%f",f);
            printf("\npress any key for continue");
            _getch();
            main();
            break;
        case 8:
            Shell_1(2);
            f = MeasurementProcessing();
            printf("%f",f);
            printf("\npress any key for continue");
            _getch();
            main();
            break;
        case 9:
            Shell_1(3);
            f = MeasurementProcessing();
            printf("%f",f);
            printf("\npress any key for continue");
            _getch();
            main();
            break;


        case 10:
            insert4_3d(1);
            f = MeasurementProcessing();
            printf("%f",f);
            printf("\npress any key for continue");
            _getch();
            main();
            break;
        case 11:
            insert4_3d(2);
            f = MeasurementProcessing();
            printf("%f",f);
            printf("\npress any key for continue");
            _getch();
            main();
            break;
        case 12:
            insert4_3d(3);
            f = MeasurementProcessing();
            printf("%f",f);
            printf("\npress any key for continue");
            _getch();
            main();
            break;


        case 13:
            Shell_2_3d(1);
            f = MeasurementProcessing();
            printf("%f",f);
            printf("\npress any key for continue");
            _getch();
            main();
            break;
        case 14:
            Shell_2_3d(2);
            f = MeasurementProcessing();
            printf("%f",f);
            printf("\npress any key for continue");
            _getch();
            main();
            break;
        case 15:
            Shell_2_3d(3);
            f = MeasurementProcessing();
            printf("%f",f);
            printf("\npress any key for continue");
            _getch();
            main();
            break;


        case 16:
            QSortMeasurement_3d(1);
            f = MeasurementProcessing();
            printf("%f",f);
            printf("\npress any key for continue");
            _getch();
            main();
            break;
        case 17:
            QSortMeasurement_3d(2);
            f = MeasurementProcessing();
            printf("%f",f);
            printf("\npress any key for continue");
            _getch();
            main();
            break;
        case 18:
            QSortMeasurement_3d(3);
            f = MeasurementProcessing();
            printf("%f",f);
            printf("\npress any key for continue");
            _getch();
            main();
            break;


        case 19:
            vectortable();
            _getch();
            main();
            break;
        case 20:
            table_mas();
            _getch();
            main();
            break;
        case 21:
            printf("\nExiting...");
            exit(0);
        default:
            printf("\nInvalid option! Please choose again.");
        }
    }
    free_memory();
    return 0;
}
