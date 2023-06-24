#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[N][3];
    for(int i = 0;i < N;i++) {
        for(int j = 0;j < 3;j++) {
            cin >> a[i][j];
        } 
    }
    
    bool can = true;
    bool can_parity = true;
    //ここで奇数、偶数で判定
    for(int i = 0;i  < N;i++) {
        if(!(a[i][0]%2 == (a[i][1] + a[i][2])%2)) {
            can_parity = false;
            break;
        }
    }

    //ここでたどり着けるか判定
    bool can_times = true;
    for(int i = 0;i < N;i++) {
        if(!(a[i][0] >= a[i][1] + a[i][2]))  {
            can_times = false;
            break;
        }
    }

    if(can_parity && can_times) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

}