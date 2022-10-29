#include <iostream>

using namespace std;

int countOccurencesOfFunction() {
    static int a; // static variable initialized with value of 0
    a++;
    return a;
}

int main(int argc, char* argv[])
{
    int a = 100;

    cout << countOccurencesOfFunction() << "\n";
    cout << countOccurencesOfFunction() << "\n";
    cout << a;

    return 0;
}
