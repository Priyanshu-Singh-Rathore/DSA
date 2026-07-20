/*
    Question: Armstrong Numbers
    ------------------------------
    A number is an Armstrong number if the sum of its own
    digits, each raised to the power of the total number of
    digits, equals the number itself.

    Example:
    Input:  N = 153
    Output: true   (1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153)

    Input:  N = 123
    Output: false
*/

#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n) {
    int original = n;
    int numDigits = to_string(n).size();

    long long sum = 0;
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += (long long)pow(digit, numDigits);
        temp = temp / 10;
    }

    return sum == original;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << (isArmstrong(n) ? "Armstrong Number" : "Not an Armstrong Number") << endl;

    return 0;
}

/*
    Time Complexity : O(logN * logN) approx
                      -> logN to count digits, logN more to
                         compute sum with pow() per digit
    Space Complexity: O(1)
*/
