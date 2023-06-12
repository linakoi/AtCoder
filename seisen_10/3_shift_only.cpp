#include <iostream>
using namespace std;


int main() {
    int N;
    cin >> N;
    int A[N];
    for(int i = 0;i < N ;i++) {
        cin >> A[i];
    }

    bool res = false;
    int count = 0;
    while(true) {
        for(int i = 0;i < N;i++) {
            if((A[i] %= 2) == 0 && A[i] == 1) {
                res = true;
            } else {
                res = false;
                break;
            }
        }
        for(int i = 0;i < N;i++) {
            A[i] /= 2;
        }
    }
    printf("%d",count);
}