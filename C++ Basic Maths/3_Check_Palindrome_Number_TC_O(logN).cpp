/*
    Question: Check Palindrome Number
    ------------------------------------
    Given an integer N, check whether it is a palindrome
    (reads the same forwards and backwards).

    Example:
    Input:  N = 121
    Output: true

    Input:  N = 123
    Output: false
*/

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) {
    if (n < 0) return false; // negative numbers are not palindromes

    long long original = n;
    long long reversed = 0;

    while (n > 0) {
        int lastDigit = n % 10;
        reversed = reversed * 10 + lastDigit;
        n = n / 10;
    }

    return original == reversed;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << (isPalindrome(n) ? "Palindrome" : "Not a Palindrome") << endl;

    return 0;
}

/*
    Time Complexity : O(log10 N)  -> one pass over the digits
    Space Complexity: O(1)
*/
