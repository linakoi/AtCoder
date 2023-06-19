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
        sum += A[i]*A[i]*(N-1);
    }
    
    for(int i = 0;i < N-1;i++) {
        for(int j = i+1;j < N;j++) {
            sum -= 2*A[i]*A[j];
        }
    }
    cout << sum << endl;
}