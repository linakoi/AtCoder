#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,A,B;
    cin >> N >> A >> B;
    if (B < A*N) {
        cout << B << endl;
    } else {
        cout << A*N << endl;
    }
}