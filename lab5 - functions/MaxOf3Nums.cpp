#include <iostream>

using namespace std;

int maxOf2Nums(int num1, int num2);
int maxOf3Nums(int num1, int num2, int num3);

int main(int argc, char* argv[])
{
    int num1, num2, num3;
    int maxValueOf2Nums, maxValueOf3Nums;

    cin >> num1 >> num2 >> num3;

    maxValueOf2Nums = maxOf2Nums(num1, num2);
    maxValueOf3Nums = maxOf3Nums(num1, num2, num3);


    cout << maxValueOf2Nums << "\n";
    cout << maxValueOf3Nums << "\n";

    return 0;
}

int maxOf2Nums(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int maxOf3Nums(int num1, int num2, int num3) {
    return maxOf2Nums(maxOf2Nums(num1, num2), num3);
}
