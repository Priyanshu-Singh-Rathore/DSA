/*
    Question: Pattern 3 - Right Half Pyramid (Numbers 1 to i)
    --------------------------------------------------------------
    Print a right-angled triangle where row i contains
    numbers from 1 to i.

    Example (N = 5):
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
*/

#include <bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
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
