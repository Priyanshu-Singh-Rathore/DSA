/*
    Question: Count Digits
    ------------------------
    Given an integer N, count the total number of digits in it.

    Example:
    Input:  N = 1234
    Output: 4

    Input:  N = -507
    Output: 3   (sign is ignored)
*/

#include <bits/stdc++.h>
using namespace std;

int countDigits(int n) {
    n = abs(n);          // handle negative numbers
    if (n == 0) return 1; // 0 has 1 digit

    int count = 0;
    while (n > 0) {
        n = n / 10;
        count++;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Number of digits: " << countDigits(n) << endl;

    return 0;
}

/*
    Time Complexity : O(log10 N)  -> loop runs once per digit
    Space Complexity: O(1)
*/
