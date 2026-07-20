/*
    Question: Reverse a Number
    ----------------------------
    Given an integer N, reverse its digits.

    Example:
    Input:  N = 1234
    Output: 4321

    Input:  N = -120
    Output: -21
*/

#include <bits/stdc++.h>
using namespace std;

long long reverseNumber(long long n) {
    bool isNegative = false;
    if (n < 0) {
        isNegative = true;
        n = -n;
    }

    long long reversed = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        reversed = reversed * 10 + lastDigit;
        n = n / 10;
    }

    return isNegative ? -reversed : reversed;
}

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Reversed number: " << reverseNumber(n) << endl;

    return 0;
}

/*
    Time Complexity : O(log10 N)  -> one iteration per digit
    Space Complexity: O(1)
*/
