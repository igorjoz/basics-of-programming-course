#include <iostream>

using namespace std;

long long int modifiedFibonacci(unsigned int n, double a, double b) {
    long long modFib0 = 0;
    long long modFib1 = 0;
    long long modFib2 = 1;
    long long result = 0;

    if (n == 0) {
        return modFib0;
    }
    else if (n == 1) {
        return modFib1;
    }
    else if (n == 2) {
        return modFib2;
    }

    for (int i = 2; i <= n; i++) {
        result = a * modFib0 + b * modFib2;
        modFib0 = modFib1;
        modFib1 = modFib2;
        modFib2 = result;
    }

    return result;
}

int main(int argc, char* argv[])
{
    unsigned int fibonacciNumsQuantity;
    double a, b;
    cin >> fibonacciNumsQuantity >> a >> b;
    
    for (int i = 0; i < fibonacciNumsQuantity; i++) {
        cout << "modifiedFibonacci(" << i << ", " << a << ", " << b << "): " << modifiedFibonacci(i, a, b) << "\n";
    }

    return 0;
}
