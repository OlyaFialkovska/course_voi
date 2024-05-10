#include <conio.h> // Include a header file to use functions to control the console
#include <windows.h> // Include a header file to use the functions to control the console window
#include "menu.h" //Include header file "menu.h"
#include "Measurement.h" //Include header file "Measurement.h"
#include "Common.h" //Include header file "Common.h"
// Table output function for the vector array
// Table output function for the vector array
void xy(int x, int y)
{
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = { x, y };
    SetConsoleCursorPosition(hStdOut, coord);
}
void vectortable()
{
    system("cls");
    float orderl, randoml, reverse_orderedl;
    xy(12, 1);
    printf("Vector %d table", VectorLength );
    xy(16, 3);
    printf("order\t\trandom\t\treverse_order\n");
    xy(2, 5);
    printf("Exchange2\n");
    xy(2, 7);
    printf("Select3\n");
    xy(2, 9);
    printf("Shell_1\n");

    xy(6, 11);
    printf("Please press any key to exit\n");

    xy(16, 5);
    Exchange2_arr(1);
    orderl = MeasurementProcessing();
    Exchange2_arr(2);
    randoml = MeasurementProcessing();
    Exchange2_arr(3);
    reverse_orderedl = MeasurementProcessing();
    printf("%.3f\t\t%.3f\t\t%.3f\n",orderl,randoml,reverse_orderedl);

    //
    xy(16, 7);
    Select3_arr(1);
    orderl = MeasurementProcessing();
    Select3_arr(2);
    randoml = MeasurementProcessing();
    Select3_arr(3);
    reverse_orderedl = MeasurementProcessing();
    printf("%.3f\t\t%.3f\t\t%.3f\n",orderl,randoml,reverse_orderedl);

    xy(16, 9);
    QSortMeasurement_vect(1);
    orderl = MeasurementProcessing();
    QSortMeasurement_vect(2);
    randoml = MeasurementProcessing();
    QSortMeasurement_vect(3);
    reverse_orderedl = MeasurementProcessing();
    printf("%.3f\t\t%.3f\t\t%.3f\n",orderl,randoml,reverse_orderedl);
    xy(0, 12);
}

// Table output function for the 3D array

void table_mas()
{
    system("cls");//clear the screen
    float direct, random, back;

    xy(12, 1);
    printf("TABLE FOR MASSIVE, cross:%d row:%d column:%d",cross, row, column);
    xy(16, 3);
    printf("order\t\trandom\t\treverse_order\n");
    xy(2, 5);
    printf("Exchange2\n");
    xy(2, 7);
    printf("Select3\n");
    xy(2, 9);
    printf("Shell_1\n");

    xy(16, 5);
    insert4_3d(1);
    direct = MeasurementProcessing();// Measure execution time direct insert4_3d
    insert4_3d(2);
    random = MeasurementProcessing();// Measure execution time random insert4_3d
    insert4_3d(3);
    back = MeasurementProcessing();// Measure execution time back insert4_3d
    printf("%.3f\t\t%.3f\t\t%.3f\n",direct,random,back);

    xy(16, 7);
    Shell_2_3d(1);
    direct = MeasurementProcessing();// Measure execution time direct Shell_2_3d
    Shell_2_3d(2);
    random = MeasurementProcessing();// Measure execution time random Shell_2_3d
    Shell_2_3d(3);
    back = MeasurementProcessing();// Measure execution time back Shell_2_3d
    printf("%.3f\t\t%.3f\t\t%.3f\n",direct,random,back);

    xy(16, 9);
    QSortMeasurement_3d(1);
    direct = MeasurementProcessing();// Measure execution time direct QSortMeasurement_3d
    QSortMeasurement_3d(2);
    random = MeasurementProcessing();// Measure execution time random QSortMeasurement_3d
    QSortMeasurement_3d(3);
    back = MeasurementProcessing();// Measure execution time back QSortMeasurement_3d
    printf("%.3f\t\t%.3f\t\t%.3f\n",direct,random,back);

}

