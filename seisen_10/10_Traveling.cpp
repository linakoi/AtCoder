#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    long long a[N][3];
    for(int i = 0;i < N;i++) {
        for(int j = 0;j < 3;j++) {
            cin >> a[i][j];
        } 
    }
    
    bool can = true;
    bool can_parity = true;

    for(int i = 0;i < N;i++) {
        for(int j = 0;j < 3;j++) {
            if(a[i][j] < 0) {
                break;
            }
        }
    }

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
        if(!(a[i][0] >= a[i][1] + a[i][2] && ((i!=0)&&(a[i][0]-a[i-1][0] >= abs(a[i][1] - a[i-1][1]) + abs(a[i][2] - a[i-1][2])) || (i == 0))))  {
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
/*

 */