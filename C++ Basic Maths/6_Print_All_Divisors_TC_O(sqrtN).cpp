/*
    Question: Print all Divisors of a Number
    --------------------------------------------
    Given an integer N, print all its divisors in sorted order.

    Example:
    Input:  N = 36
    Output: 1 2 3 4 6 9 12 18 36
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> printDivisors(int n) {
    vector<int> divisors;

    // only check up to sqrt(n); add both i and n/i
    for (int i = 1; (long long)i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());
    return divisors;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> divisors = printDivisors(n);

    cout << "Divisors: ";
    for (int d : divisors) cout << d << " ";
    cout << endl;

    return 0;
}

/*
    Time Complexity : O(sqrt(N))  -> loop runs till sqrt(N)
    Space Complexity: O(number of divisors) for storing them

    Note: A brute force approach (checking every number from 1
    to N) would take O(N) time, which is slower for large N.
*/
