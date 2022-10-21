#include <iostream>

using namespace std;

int main()
{
    unsigned char character = 'X';
    string word = "aeiouy";
    int nums[8] = { 59, 93, 35, 7, 9, 10, 13, 32 };

    cout << character << "\n";
    cout << (int)character << "\n";

    for (int i = 0; i < word.length(); i++) {
        cout << word[i] << ": " << (int)word[i] << "\n";
    }
    cout << "\n";

    for (int num : nums) {
        cout << num << ": " << (char)num << "\n";
    }

    return 0;
}
