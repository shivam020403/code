#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n) {
    int temp = n;
    int base = 1;

    int decimal = 0;
    while(temp) {
        int last_digit = temp % 10;
        temp /= 10;

        decimal += last_digit * base;
        base *= 2;
    }
    return decimal;
}

int main()
{
    cout << binaryToDecimal(1010);
    return 0;
}

// Time Complexity -> O()
// Space Complexity -> O()