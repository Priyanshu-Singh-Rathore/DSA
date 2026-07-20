/*
    Question: Pattern 6 - Inverted Right Half Pyramid (Numbers)
    ------------------------------------------------------------------
    Print an inverted right-angled triangle where row i
    (from top) contains numbers from 1 to (N - i + 1).

    Example (N = 5):
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
*/

#include <bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
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
    Time Complexity : O(N^2)  -> total elements printed ~ N^2
    Space Complexity: O(1)
*/
