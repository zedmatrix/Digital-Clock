#include <chrono>
#include <iostream>
#include <ctime>

long Fibonacci(unsigned n)
{
    return n < 2 ? n : Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
    const auto start{std::chrono::steady_clock::now()};
    const auto fb{Fibonacci(42)};
    const auto end{std::chrono::steady_clock::now()};
    const std::chrono::duration<double> elapsed_seconds{end - start};

    std::cout << "Fibonacci(42): " << fb << "\nElapsed time: ";
    std::cout << elapsed_seconds.count() << "s\n"; // Before C++20
//    std::cout << elapsed_seconds << '\n'; // C++20's chrono::duration operator<<

//   print the time when it started
	time_t myStart = std::chrono::system_clock::to_time_t(start);
	std::cout << "Started Time is " << ctime(&myStart) << '\n';


	return 0;
}
