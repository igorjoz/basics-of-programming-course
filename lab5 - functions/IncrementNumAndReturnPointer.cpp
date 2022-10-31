#include <iostream>

using namespace std;

int* incrementNumAndReturnPointer(int* num) {
    (*num)++;
    return num;
}

int returnNumAndIncrement(int* num) {
    return (*num)++;
}

int main(int argc, char* argv[])
{
    int num = 10;

    cout << *incrementNumAndReturnPointer(&num) << "\n";
    cout << returnNumAndIncrement(&num) << "\n";
    cout << num << "\n";

    return 0;
}
