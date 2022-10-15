#include <iostream>

using namespace std;

int main()
{
    int nums[8] = { 59, 93, 35, 7, 9, 10, 13, 32 };

    int num = 7;
    int* numPointer = &num;
    
    cout << numPointer << " -> " << num << "\n";
    cout << numPointer << " -> " << *numPointer << "\n\n";

    return 0;
}
