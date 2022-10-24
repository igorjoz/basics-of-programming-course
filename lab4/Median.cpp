#include <iostream>

using namespace std;

int main()
{
    /*const int NUMS_QUANTITY = 7;
    int nums[NUMS_QUANTITY] = { 3, 3, 4, 10, 18, 20, 25 };*/

    const int NUMS_QUANTITY = 8;
    int nums[NUMS_QUANTITY] = { 3, 3, 4, 10, 15, 18, 20, 25 };

    int middleIndex = NUMS_QUANTITY / 2;

    double result = 0;

    if (NUMS_QUANTITY % 2 == 1) {
        result = nums[middleIndex];
    }
    else {
        result = (double)(nums[middleIndex] + nums[middleIndex - 1]) / 2.0;
    }

    cout << result << "\n";

    return 0;
}
