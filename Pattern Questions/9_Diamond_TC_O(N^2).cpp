/*
    Question: Pattern 9 - Diamond Pattern
    -----------------------------------------
    Print a diamond shape by combining a pyramid (Pattern 7)
    on top and an inverted pyramid (Pattern 8) below it.

    Example (N = 5):
        *
       * * *
      * * * * *
     * * * * * * *
    * * * * * * * * *
    * * * * * * * * *
     * * * * * * *
      * * * * *
       * * *
        *
*/

#include <bits/stdc++.h>
using namespace std;

// upper half: pyramid
void printUpperHalf(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << "  ";
        for (int j = 1; j <= (2 * i - 1); j++) cout << "* ";
        cout << "\n";
    }
}

// lower half: inverted pyramid
void printLowerHalf(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i - 1; j++) cout << "  ";
        for (int j = 1; j <= (2 * (n - i) + 1); j++) cout << "* ";
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
