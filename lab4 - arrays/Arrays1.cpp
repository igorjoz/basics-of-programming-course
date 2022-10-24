#include <iostream>

using namespace std;

int main()
{
    const int NUMS_QUANTITY = 10;
    int nums[NUMS_QUANTITY];

    for (int i = 0; i < NUMS_QUANTITY; i++) {
        nums[i] = i;
    }

    for (int i = NUMS_QUANTITY - 1; i >= 0; i--) {
        cout << nums[i] << "\n";
    }

    return 0;
}
