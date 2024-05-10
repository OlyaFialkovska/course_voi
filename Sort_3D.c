#include <time.h> // Include a header file for working with time
#include "Common.h" //Include header file "Common.h"
// Function to sort 4 inserts for 3D array
clock_t Insertion_Sorting_4()
{
    int b[row][column],L,R,s,r,k,i,j;

    clock_t time_start, time_stop;
    time_start = clock();
    for(k=0; k<cross; k++)
    {
        for(i=0; i<row; i++)
            for(j=0; j<column; j++)
                b[i][j]=Arr3D[k][i][j];
        L=0;
        R=k;
        while(L<R)
        {
            s=L+((R-L)/2);
            if(b[0][0]>=Arr3D[s][0][0])
            {
                L=s+1;
            }
            else
            {
                R=s;
            }
        }
        for(r=k-1; r>=R; r--)
        {
            for(i=0; i<row; i++)
                for(j=0; j<column; j++)
                    Arr3D[r+1][i][j]=Arr3D[r][i][j];
        }
        for(i=0; i<row; i++)
            for(j=0; j<column; j++)
                Arr3D[R][i][j]=b[i][j];
    }
    time_stop = clock();
    return time_stop - time_start;
}
// Shell sorting function for 3D array
clock_t shell_2_sort()
{
    int b[row][column];
    int t,k,i,j,r,l,m;

    clock_t time_start, time_stop;
    time_start = clock();

    if (cross<4) t=1;
    else t=(int)log2f((float)cross)-1;
    int h[t];
     h[t-1]=1;
    for (int i=t-2; i>=0; i--)
        h[i]=2*h[i+1]+1;

    for(m=0; m<t; m++)
    {
        k=h[m];//m
        for(l=k; l<cross; l++)//l=k
        {
            r=l;
            while(r>=k && Arr3D[r][0][0]<Arr3D[r-k][0][0])
            {
                for(i=0; i<row; i++)
                    for(j=0; j<column; j++)
                        b[i][j]=Arr3D[r][i][j];
                for(i=0; i<row; i++)
                    for(j=0; j<column; j++)
                        Arr3D[r][i][j]=Arr3D[r-k][i][j];
                for(i=0; i<row; i++)
                    for(j=0; j<column; j++)
                        Arr3D[r-k][i][j]=b[i][j];
                r=r-k;
            }
        }
    }
    time_stop = clock();
    return time_stop - time_start;
}
// Quick sort function for 3D array
void QSort(int L,int R)
{
    int x,b,i,j,k,r;
    x=Arr3D[L+(R-L)/2][0][0];
    k=L;
    r=R;

    while(k<=r)
    {
        while(Arr3D[k][0][0]<x)
            k++;
        while(Arr3D[r][0][0]>x)
            r--;
        if(k<=r)
        {
            for(i=0; i<row; i++)
                for(j=0; j<column; j++)
                {
                    b=Arr3D[k][i][j];
                    Arr3D[k][i][j]=Arr3D[r][i][j];
                    Arr3D[r][i][j]=b;
                }
            k++;
            r--;
        }
    }
    if(L<r)
    {
        QSort(L,r);
    }
    if(k<R)
    {
        QSort(k,R);
    }
}

