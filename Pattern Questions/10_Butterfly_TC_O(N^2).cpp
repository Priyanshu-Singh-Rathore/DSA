/*
    Question: Pattern 10 - Butterfly Pattern
    ---------------------------------------------
    Print a butterfly shape made of two right triangles
    mirrored side by side (upper half + lower half).

    Example (N = 5):
    *        *
    * *      * *
    * * *    * * *
    * * * *  * * * *
    * * * * ** * * * *
    * * * * ** * * * *
    * * * *  * * * *
    * * *    * * *
    * *      * *
    *        *
*/

#include <bits/stdc++.h>
using namespace std;

void printUpperHalf(int n) {
    for (int i = 1; i <= n; i++) {
        // left stars
        for (int j = 1; j <= i; j++) cout << "* ";
        // middle spaces
        for (int j = 1; j <= 2 * (n - i); j++) cout << "  ";
        // right stars
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << "\n";
    }
}

void printLowerHalf(int n) {
    for (int i = n; i >= 1; i--) {
        // left stars
        for (int j = 1; j <= i; j++) cout << "* ";
        // middle spaces
        for (int j = 1; j <= 2 * (n - i); j++) cout << "  ";
        // right stars
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << "\n";
    }
}

void printPattern(int n) {
    printUpperHalf(n);
    printLowerHalf(n);
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    printPattern(n);

    return 0;
}

/*
    Time Complexity : O(N^2)  -> upper half O(N^2) + lower half O(N^2)
    Space Complexity: O(1)
*/
