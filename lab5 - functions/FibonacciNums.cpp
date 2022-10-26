#include <iostream>

using namespace std;

long long int fibonacci(unsigned int num) {
    long long fib0 = 0;
    long long fib1 = 1;
    long long result = 0;

    if (num == 0) {
        return fib0;
    }
    else if (num == 1) {
        return fib1;
    }

    for (int i = 2; i <= num; i++) {
        result = fib0 + fib1;
        fib0 = fib1;
        fib1 = result;
    }

    return result;
}

int main(int argc, char* argv[])
{
    unsigned int fibonacciNumsQuantity;
    cin >> fibonacciNumsQuantity;
    
    for (int i = 0; i < fibonacciNumsQuantity; i++) {
        cout << "fibonacci(" << i << "): " << fibonacci(i) << "\n";
    }

    return 0;
}
