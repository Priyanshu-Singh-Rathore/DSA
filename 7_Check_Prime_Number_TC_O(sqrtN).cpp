/*
    Question: Check for Prime Number
    ------------------------------------
    Given an integer N, check whether it is a prime number
    (divisible only by 1 and itself, and greater than 1).

    Example:
    Input:  N = 29
    Output: true

    Input:  N = 15
    Output: false
*/

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;          // 2 and 3 are prime
    if (n % 2 == 0 || n % 3 == 0) return false;

    // check divisibility only up to sqrt(n)
    for (int i = 5; (long long)i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << (isPrime(n) ? "Prime" : "Not Prime") << endl;

    return 0;
}

/*
    Time Complexity : O(sqrt(N))  -> loop runs till sqrt(N)
    Space Complexity: O(1)

    Note: A brute force approach (checking every number from 2
    to N-1) would take O(N) time, which is slower for large N.
*/
