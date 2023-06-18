#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> A(64);
    for (int i = 0; i < 64; i++) {
        cin >> A[i];
    }

    unsigned long long total = 0;
    for (int i = 0; i < 64; i++) {
        total += A[i] * (unsigned long long)pow(2, i);
    }

    cout << total << endl;
}
