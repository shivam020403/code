#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int n) {
    int binary = 0;
    int base = 1;

    while(n) {
        int last_digit = n % 2;
        n /= 2;

        binary += last_digit * base;
        base *= 10;
    }
    return binary;
}

int main()
{
    cout << decimalToBinary(10);
    return 0;
}

// Time Complexity -> O()
// Space Complexity -> O()