#include <bits/stdc++.h>
using namespace std;

bool isGoodInteger(int N) {
    string number = to_string(N);
    char prep = number[0];
    int count = 1;

    for(int i = 1;i < number.length();i++) {
        if(prep == number[i]) {
            count++;
            if(count >= 3) {
                return true;
            }
        } else {
            count = 1;
            prep = number[i];
        }
    }
    return false;
}


int main() {
    int N;
    cin >> N;
    
    if (isGoodInteger(N)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
