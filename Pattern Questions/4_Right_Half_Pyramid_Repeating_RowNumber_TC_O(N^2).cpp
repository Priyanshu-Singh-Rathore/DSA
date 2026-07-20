/*
    Question: Pattern 4 - Right Half Pyramid (Repeating Row Number)
    --------------------------------------------------------------------
    Print a right-angled triangle where row i contains the
    number i repeated i times.

    Example (N = 5):
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
*/

#include <bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
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
