/*
    Question: GCD or HCF of Two Numbers
    --------------------------------------
    Given two integers A and B, find their Greatest Common
    Divisor (GCD), also called Highest Common Factor (HCF).

    Example:
    Input:  A = 20, B = 28
    Output: 4
*/

#include <bits/stdc++.h>
using namespace std;

// Euclidean Algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "GCD/HCF: " << gcd(a, b) << endl;

    return 0;
}

/*
    Time Complexity : O(log(min(A, B)))  -> Euclidean algorithm
    Space Complexity: O(1)

    Note: A brute force approach (checking every number from
    min(A,B) down to 1) would take O(min(A,B)) time, which is
    much slower for large inputs.
*/
