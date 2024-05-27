#include <chrono>
#include <iostream>
using namespace std;

long Fibonacci(unsigned n)
{
    return n < 2 ? n : Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
    const auto start{chrono::steady_clock::now()};
    const auto fb{Fibonacci(42)};
    const auto end{chrono::steady_clock::now()};
    const chrono::duration<double> elapsed_seconds{end - start};

    cout << "Fibonacci(42): " << fb << "\nElapsed time: ";
    cout << elapsed_seconds.count() << "s\n"; // Before C++20

//    std::cout << elapsed_seconds << '\n'; // C++20's chrono::duration operator<<


	return 0;
}
