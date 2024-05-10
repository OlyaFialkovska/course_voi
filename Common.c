#include "common.h" //Include header file "common.h"
// Allocation of memory for a three-dimensional array
void initialization_memory()
{
    Arr3D = (int***) malloc(cross*sizeof(int**));
    for (int k=0; k<cross; k++)
    {
        Arr3D[k] = (int**) malloc(row*sizeof(int*));
        for (int i=0; i<row; i++)
            Arr3D[k][i] = (int*) malloc(column*sizeof(int));
    }
}
// Release the allocated memory for the three-dimensional array
void free_memory()
{
    for (int k=0; k<cross; k++)
    {
        for (int i=0; i<row; i++)
            free(Arr3D[k][i]);
        free(Arr3D[k]);
    }
    free(Arr3D);
}

