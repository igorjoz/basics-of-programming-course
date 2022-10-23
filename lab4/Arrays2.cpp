#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 6;

    int nums1[SIZE] = { 0, 2, 4, 6, 8, 10 };
    int nums2[SIZE] = { 1, 3, 5, 7, 9, 11 };
    int joinedNums[2 * SIZE];

    for (int i = 0; i < SIZE; i++) {
        joinedNums[2 * i] = nums1[i];
        joinedNums[2 * i + 1] = nums2[SIZE - i - 1];
    }

    cout << "nums1: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << "\n";

    cout << "nums2: ";
    for (int num : nums2) {
        cout << num << " ";
    }
    cout << "\n";

    cout << "joinedNums: ";
    for (int num : joinedNums) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}
