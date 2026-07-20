/*
    Question: Pattern 5 - Inverted Right Half Pyramid (Stars)
    --------------------------------------------------------------
    Print an inverted right-angled triangle where row i
    (from top) contains (N - i + 1) stars.

    Example (N = 5):
    * * * * *
    * * * *
    * * *
    * *
    *
*/

#include <bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    printPattern(n);

    return 0;
}

/*
    Time Complexity : O(N^2)  -> total stars printed ~ N^2
    Space Complexity: O(1)
*/
