#include <bits/stdc++.h>
using namespace std;

int main() {
    int number[7] = {0,3,4,8,9,14,23};
    char p,q;
    cin >> p >> q;
    p -= 'A';
    q -= 'A';
    p = number[p];
    q = number[q];
    int result = p-q;
    if(result < 0) {
        result *= -1;
    }
    printf("%d",result);
}