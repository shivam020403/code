#include<bits/stdc++.h>
using namespace std;

void squarePattern(int n) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    squarePattern(n);
    return 0;
}

// Time Complexity -> O(N²)
// Space Complexity -> O(1)