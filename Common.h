#ifndef COMMON_H_INCLUDED
#define COMMON_H_INCLUDED

#define cross 8 // Number of "sections" in the 3D array
#define row 30 // The number of rows in a three-dimensional array
#define column 200 // Number of columns in the 3D array
#define VectorLength 14000 // Size of vector array
int *** Arr3D; // 3D array
int Vector [VectorLength]; // Vector array

void initialization_memory(); // Prototype function for memory initialization
void free_memory(); // Prototype function for freeing memory

#endif // COMMON_H_INCLUDED

