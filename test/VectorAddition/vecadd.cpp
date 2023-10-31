#include <iostream>

#include "../../src/Vector.hpp"
#include "../../src/CPU_vec_add.hpp"

int main(int argc, char const *argv[])
{
    // Length of Vector
    int N;
    
    std::cout << "Enter the length of Vector: ";
    std::cin >> N;

    // Initialise random Vectors
    VectorFP32 a(N, 0, 5);
    VectorFP32 b(N, 0, 5);
    VectorFP32 c(N);

    // Printing Vectors
    for (int i = 0; i < N; i++)
        std::cout << a.get(i) << " ";
    std::cout << "\n";

    for (int i = 0; i < N; i++)
        std::cout << b.get(i) << " ";
    std::cout << "\n";

    // Addition
    cpu_vec_add(a, b, c);
    for (int i = 0; i < N; i++)
        std::cout << c.get(i) << " ";
    std::cout << "\n";

    return 0;
}

