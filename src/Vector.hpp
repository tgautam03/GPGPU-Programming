// VectorFP32.h
#ifndef Vector_H
#define Vector_H

#include <cstdlib>

class VectorFP32
{
    public:
    int N;      // Length of Vector
    float *vec; // Pointer to array

    // Constructor
    VectorFP32(int N_elements);

    // Constructor to initialise vector with random fp number between fpmin and fpmax
    VectorFP32(int N_elements, float fpmin, float fpmax);

    // Get value at an index idx
    float get(int idx);

    // Set value val at an index idx
    void set(int idx, float val);
};

#endif