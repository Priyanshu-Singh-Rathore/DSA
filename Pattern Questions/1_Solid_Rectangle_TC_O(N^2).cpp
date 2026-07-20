/*
    Question: Pattern 1 - Solid Rectangle of Stars
    --------------------------------------------------
    Print a solid square/rectangle of stars with N rows
    and N columns.

    Example (N = 5):
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *
*/

#include <bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
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
    Time Complexity : O(N^2)  -> N rows, N columns each
    Space Complexity: O(1)
*/
