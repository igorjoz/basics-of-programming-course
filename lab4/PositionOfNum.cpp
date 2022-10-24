#include <iostream>

using namespace std;

int main()
{
    const int NUMS_QUANTITY = 5;
    //int nums[NUMS_QUANTITY] = { 1, 2, 3, 4, 5 };
    //int nums[NUMS_QUANTITY] = { 3, 3, 7, 9, 20 };
    //int nums[NUMS_QUANTITY] = { 1, 1, 1, 1, 1 };
    int nums[NUMS_QUANTITY] = { 20, 5, 7, 50, 9 };
    int positionsOfNums[NUMS_QUANTITY] = {};

    for (int i = 0; i < NUMS_QUANTITY; i++) {
        positionsOfNums[i] = 1;

        for (int j = 0; j < NUMS_QUANTITY; j++) {
            if (nums[j] > nums[i]) {
                positionsOfNums[i]++;
            }
        }
    }

    for (int i = 0; i < NUMS_QUANTITY; i++) {
        cout << "num " << nums[i] << " position: " << positionsOfNums[i] << "\n";
    }

    return 0;
}
