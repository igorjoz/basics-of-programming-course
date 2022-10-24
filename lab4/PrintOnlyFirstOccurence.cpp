#include <iostream>

using namespace std;

int main()
{
    const int NUMS_QUANTITY = 5;
    int nums[NUMS_QUANTITY];

    for (int i = 0; i < NUMS_QUANTITY; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < NUMS_QUANTITY; i++) {
        bool isFirstOccurence = true;

        for (int j = 0; j < i; j++) {
            if (nums[j] == nums[i]) {
                isFirstOccurence = false;
            }
        }

        if (isFirstOccurence) {
            cout << nums[i] << "\n";
        }
    }

    return 0;
}
