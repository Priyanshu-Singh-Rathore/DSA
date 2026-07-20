/*
    Question: Pattern 7 - Pyramid (Centered Triangle)
    -------------------------------------------------------
    Print a centered pyramid of stars. Row i has (N - i)
    leading spaces and (2*i - 1) stars.

    Example (N = 5):
        *
       * * *
      * * * * *
     * * * * * * *
    * * * * * * * * *
*/

#include <bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        // print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  "; // 2 spaces to align with "* "
        }
        // print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
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
    Time Complexity : O(N^2)  -> spaces + stars together ~ N^2
    Space Complexity: O(1)
*/
