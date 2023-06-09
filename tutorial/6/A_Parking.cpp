#include <bits/stdc++.h>
using namespace std;

bool isGoodInteger(int n) {
    string str = to_string(n);
    int count = 1;
    char prev = str[0];
    
    for (int i = 1; i < str.length(); i++) {
        if (str[i] == prev) {
            count++;
            if (count >= 3) {
                return true;
            }
        } else {
            count = 1;
            prev = str[i];
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
