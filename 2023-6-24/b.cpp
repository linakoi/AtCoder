#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    string s[N];
    for (int i = 0; i < N; i++) {
        cin >> s[i];
    }

    bool can = false;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) {
                continue;
            }
            string concatenated = s[i] + s[j];
            if (isPalindrome(concatenated)) {
                can = true;
                break;
            }
        }
        if (can) {
            break;
        }
    }

    if (can) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}


/*int main() {
    int N;
    cin >> N;
    string s[N];
    for(int i = 0;i < N;i++) {
        cin >> s[i];
    }

    string tmp;
    bool can = false;
    bool can2 = false;
    for(int i = 0;i < N;i++) {
        for(int j = 0;j < N;j++) {
            if(i == j) {
                continue;
            }
            tmp = s[i] + s[j];
            int tmpsize = tmp.size(); 
                for(int k = 0;k < tmpsize/2;k++) {
                    if(k == tmpsize - k - 1) {
                        if(can2) {
                            can = true;
                            break;
                        }
                    }
                    if(!(tmp[k] == tmp[tmpsize - k - 1])) {
                        can2 = false;
                    } else {
                        can2 = true;
                    }
                }
                if(can2) {
                    can = true;
                } 
        }
    }
    if(can) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
*/