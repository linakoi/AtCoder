#include <iostream>
using namespace std;

int main() {
    int N,Y;
    cin >> N >> Y;
    int a = -1, b = -1,c = -1;
    for(int i = 0;i <= N;i++) {
        for(int j = 0;j+i <= N;j++) { // j+i <= Nにしないとバグる
            if(i*10000 + j * 5000 + (N - i - j) * 1000 == Y) {
                a = i;
                b = j;
                c = N - i -j;
            }
        }
    }
    cout << a << " " << b << " " << c << endl;
}