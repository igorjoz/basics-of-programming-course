#include <iostream>

using namespace std;

long long int doubleFactorial(int num) {
    long long int result = 1;

    for (int i = num; i > 0; i -= 2) {
        result *= i;
    }

    return result;
}

int main(int argc, char* argv[])
{
    for (int i = 1; i < 30; i++) {
        cout << "doubleFactorial(" << i << "): " << doubleFactorial(i) << "\n";
    }

    return 0;
}
