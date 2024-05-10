#include "time.h" // Include a header file for working with time
#include "common.h" //Include header file "Common.h"
// Function to sort 4 inserts for vector array
clock_t Exchange2()
{
    int R, flag, tmp;
    clock_t time_start, time_stop;
    time_start = clock();
    R=VectorLength-1;
    flag=1;
    while(flag == 1)
    {
        flag=0;
        for(int i=0; i<R; i++)
            if (Vector[i]>Vector[i+1])
            {
                tmp=Vector[i];
                Vector[i]=Vector[i+1];
                Vector[i+1]=tmp;
                flag=1;
            }
        R--;
    }
    time_stop = clock();
    return time_stop - time_start;
}

clock_t Select3()
{
    int Min, Max;
    int L, R, imin, imax;
    clock_t time_start, time_stop;
    time_start = clock();
    L=0;
    R=VectorLength-1;
    while (L<R)
    {
        Min=Vector[L];
        imin=L;
        Max=Vector[L];
        imax=L;
        for(int i=L+1; i<R+1; i++)
        {
            if (Vector[i] < Min)
            {
                Min=Vector[i];
                imin=i;
            }
            else if (Vector[i] > Max)
            {
                Max=Vector[i];
                imax=i;
            }
        }
        Vector[imin]=Vector[L];
        Vector[L]=Min;
        if (imax==L) Vector[imin]=Vector[R];
        else Vector[imax]=Vector[R];
        Vector[R]=Max;
        L=L+1;
        R=R-1;
    }
    time_stop = clock();
    return time_stop - time_start;
}

clock_t Shell_1()
{
    int Elem, t, j, k;
    int Stages[t];
    clock_t time_start, time_stop;
    time_start = clock();
    if (VectorLength<4) t=1;
    else t=(int)log2f((float)VectorLength)-1;
    Stages[t-1]=1;
    for (int i=t-2; i>=0; i--)
        Stages[i]=2*Stages[i+1]+1;
    for (int p=0; p<t; p++)
    {
        k=Stages[p];
        for (int i=k; i<VectorLength; i++)
        {
            Elem=Vector[i];
            j=i;
            while (j>=k && Elem<Vector[j-k])
            {
                Vector[j]=Vector[j-k];
                j=j-k;
            }
            Vector[j]=Elem;
        }
    }
    time_stop = clock();
    return time_stop - time_start;
}
