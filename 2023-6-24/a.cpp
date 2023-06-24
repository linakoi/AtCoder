#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[N][7];
    for(int i = 0;i < N;i++) {
        for(int j = 0;j < 7;j++) {
            cin >> a[i][j];
        }
    }

    int b[N] = {0};

    for(int i = 0;i < N;i++) {
        for(int j = 0;j < 7;j++) {
            b[i] += a[i][j];
        }
    }

    for(int i = 0;i < N;i++) {
        cout << b[i] << " ";
    }

}