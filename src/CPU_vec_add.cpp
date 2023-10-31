#include "CPU_vec_add.hpp"

void cpu_vec_add(VectorFP32 a, VectorFP32 b, VectorFP32 c)
{
    // Get length of array
    int N_elements = c.N;

    // Addition
    for (int i = 0; i < N_elements; i++)
    {
        float sum = a.get(i) + b.get(i);
        c.set(i, sum);
    }
    std::cout << "\n";
}


