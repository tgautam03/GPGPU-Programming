#include "Vector.hpp"

// Constructor Definition
VectorFP32::VectorFP32(int N_elements)
{
    N = N_elements;
    vec = new float[N_elements];
}

// Constructor to initialise vector with random fp number between fpmin and fpmax
VectorFP32::VectorFP32(int N_elements, float fpmin, float fpmax)
{
    N = N_elements;
    
    // Initialise array on heap
    vec = new float[N_elements];

    // Enter random value between the range
    for (int i = 0; i < N_elements; i++)
    {
        float random = ((float) rand()) / (float) RAND_MAX;
        float diff = fpmax - fpmin;
        float r = random * diff;
        vec[i] = fpmin + r;
    }
    
}

// Get value at an index idx
float VectorFP32::get(int idx)
{
    return vec[idx];
}

// Set value val at an index idx
void VectorFP32::set(int idx, float val)
{
    vec[idx] = val;
}
