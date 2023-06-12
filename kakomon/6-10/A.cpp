#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int result = N / 5;
    if(N % 5 >= 3) {
        result++;
    }
    cout << result * 5 << endl;
}