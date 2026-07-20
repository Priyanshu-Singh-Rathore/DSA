/*
    Question: Pattern 2 - Right Half Pyramid (Stars)
    ----------------------------------------------------
    Print a right-angled triangle where row i contains
    i stars.

    Example (N = 5):
    *
    * *
    * * *
    * * * *
    * * * * *
*/

#include <bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
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
    Time Complexity : O(N^2)  -> total stars printed = 1+2+..+N ~ N^2
    Space Complexity: O(1)
*/
