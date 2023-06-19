#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    for(int i = 0;i < N;i++) {
        cin >> A[i];
    }
    int sum = 0;
    for(int i = 0;i < N;i++) {
        sum += 2*A[i];
    }
    for(int i = 1;i < N;i++) {
        for(int j = 0;j < i;j++) {
            sum += (int)pow((A[i] - A[j]),2);
        }
    }
    cout << sum << endl;
}