#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    const int GROUP_SIZE = 25;
    const int SIZE = 10 * GROUP_SIZE;
    const int GROUPS_QUANTITY = SIZE / GROUP_SIZE;

    const double ratings[] = { 2, 3, 3.5, 4, 4.5, 5, 5.5 };
    int results[SIZE];
    int stats[7] = {};

    double averageOfResults = 0;
    int quantityOfResultsGreaterThanAverage = 0;

    double groupAverageResult[GROUPS_QUANTITY] = {};

    srand(time(NULL));

    for (int i = 0; i < SIZE; i++) {
        int randomNum = rand() % 100; // get random rating index ranging from 0 to 99

        if (randomNum >= 95) {
            results[i] = 6;
        }
        else if (randomNum >= 85) {
            results[i] = 5;
        }
        else if (randomNum >= 75) {
            results[i] = 4;
        }
        else if (randomNum >= 55) {
            results[i] = 3;
        }
        else if (randomNum >= 30) {
            results[i] = 2;
        }
        else if (randomNum >= 15) {
            results[i] = 1;
        }
        else if (randomNum >= 0) {
            results[i] = 0;
        }
    }

    int groupIndex = 0;
    for (int i = 0; i < SIZE; i++) {
        stats[results[i]]++;
        groupAverageResult[groupIndex] += ratings[results[i]];
        
        if (i % GROUP_SIZE == GROUP_SIZE - 1) {
            groupAverageResult[groupIndex] /= GROUP_SIZE;
            groupIndex++;
        }
    }

    for (int i = 0; i < 7; i++) {
        averageOfResults += (double)(ratings[i] * stats[i]);
        cout << ratings[i] << "\t-\t" << stats[i] << "\n";
    }
    cout << "\n";

    averageOfResults /= SIZE;

    for (int i = 0; i < 7; i++) {
        if (ratings[i] > averageOfResults) {
            quantityOfResultsGreaterThanAverage += stats[i];
        }
    }

    cout << "Quantity of all results: " << SIZE << "\n";
    cout << "Quantity of results greater than 2: " << SIZE - stats[0] << "\n";
    cout << "Average of all results: " << averageOfResults << "\n";
    cout << "Quantity of results greater than average: " << quantityOfResultsGreaterThanAverage << "\n\n";

    for (int i = 0; i < GROUPS_QUANTITY; i++) {
        cout << "Group " << i + 1 << ". results list: ";
        for (int k = 0; k < GROUP_SIZE; k++) {
            cout << ratings[results[i * GROUP_SIZE + k]] << " ";
        }
        cout << "\nGroup " << i + 1 << ". average result: " << groupAverageResult[i] << "\n\n";
    }

    return 0;
}
