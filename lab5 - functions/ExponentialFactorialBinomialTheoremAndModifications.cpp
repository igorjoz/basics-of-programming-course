#include <iostream>

using namespace std;

long long exponential(long long num, long long exp) {
    long long result = num;
    exp--;

    for (long long i = 0; i < exp; i++) {
        result *= num;
    }

    return result;
}

double exponentialDoubleType(double num, long long exp) {
    double result = num;
    exp--;

    for (long long i = 0; i < exp; i++) {
        result *= num;
    }

    return result;
}

long long sumOfExponentials(long long exp, long long num, long long quantity) {
    long long result = 0;

    for (long long i = 0; i < quantity; i++) {
        result += exponential(num, exp);
        num++;
    }

    return result;
}

long long factorial(long long num) {
    if (num < 1) {
        return 0;
    }
    
    long long result = 1;

    while (num > 1) {
        result *= num;
        num--;
    }

    return result;
}

double binomialTheorem(long long n, long long k) {
    long long nominator = factorial(n);
    long long denominator = factorial(k) * factorial(n - k);

    double result = nominator / denominator;

    return result;
}

int main(int argc, char* argv[])
{
    cout << exponential(2, 6) << "\n";
    cout << exponential(3, 5) << "\n";
    cout << exponential(11, 4) << "\n\n";

    cout << exponentialDoubleType(1.1, 5) << "\n";
    cout << exponentialDoubleType(1.35, 10) << "\n";
    cout << exponentialDoubleType(80.4, 6) << "\n\n";

    for (long long i = 1; i < 20; i++) {
        cout << i << "! = " << factorial(i) << "\n";
    }
    cout << "\n";

    cout << binomialTheorem(2, 1) << "\n";
    cout << binomialTheorem(3, 1) << "\n";
    cout << binomialTheorem(4, 1) << "\n\n";

    cout << binomialTheorem(6, 3) << "\n";
    cout << binomialTheorem(7, 3) << "\n";
    cout << binomialTheorem(9, 5) << "\n\n";

    cout << sumOfExponentials(1, 1, 5) << "\n";
    cout << sumOfExponentials(1, 3, 5) << "\n";
    cout << sumOfExponentials(2, 1, 5) << "\n";
    cout << sumOfExponentials(3, 3, 10) << "\n";

    return 0;
}
