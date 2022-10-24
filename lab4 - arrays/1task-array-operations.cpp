#include <iostream>

using namespace std;

int main()
{
	int nums[1000];
	int numsQuantity, operationsQuantity;
	char operationType;

	int initialValueToReplace, newValueForReplacement;
	int numsInGroupQuantity;
	int initialIndex, finishIndex;

	cin >> numsQuantity;

	for (int i = 0; i < numsQuantity; i++) {
		cin >> nums[i];
	}

	cin >> operationsQuantity;

	for (int i = 0; i < operationsQuantity; i++) {
		cin >> operationType;

		if (operationType == 'c')
		{
			cin >> initialValueToReplace >> newValueForReplacement;
			int quantityOfChangedElements = 0;

			for (int j = 0; j < numsQuantity; j++) {
				if (nums[j] == initialValueToReplace) {
					nums[j] = newValueForReplacement;
					quantityOfChangedElements++;
				}
			}

			cout << quantityOfChangedElements << "\n";
		}
		else if (operationType == 's') {
			cin >> numsInGroupQuantity;

			int quantityOfAddedNums = 0;
			int currentGroupSum = 0;

			for (int j = 0; j < numsQuantity; j++) {
				currentGroupSum += nums[j];
				quantityOfAddedNums++;

				if (quantityOfAddedNums == numsInGroupQuantity or j == numsQuantity - 1) {
					cout << currentGroupSum << " ";

					quantityOfAddedNums = 0;
					currentGroupSum = 0;
				}
			}
			cout << "\n";
		}
		else if (operationType == 'm') {
			cin >> initialIndex >> finishIndex;
			initialIndex--; // adjustment for indices starting at 0 (task specifies indices starting at 1)
			finishIndex--;

			if (initialIndex < 0) {
				initialIndex = 0;
			}

			if (finishIndex >= numsQuantity)
			{
				finishIndex = numsQuantity - 1;
			}

			int minNum = nums[initialIndex];

			if (initialIndex > numsQuantity - 1 or finishIndex < 0 or initialIndex > finishIndex) {
				cout << "#\n";
			}
			else {
				for (int j = initialIndex; j <= finishIndex; j++) {
					//cout << "initialIndex: " << initialIndex << "\tfinishIndex: " << finishIndex << "\tj: " << j << "\n";
					if (nums[j] < minNum) {
						minNum = nums[j];
					}
				}

				cout << minNum << "\n";
			}
		}
	}

	return 0;
}
