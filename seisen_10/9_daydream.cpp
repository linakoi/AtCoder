#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string S;
    cin >> S;
    string T = "";
    string word[4] = {"dream","dreamer","erase","eraser"};
    reverse(S.begin(), S.end());
    for(int i = 0;i < 4;i++) reverse(word[i].begin(),word[i].end());
    
    bool can = true;
    for(int i = 0;i < S.size();) {
        bool can2 = false; //どのword[4]で分けられるか
        for(int j = 0;j < 4;j++) {
            if(S.substr(i,word[j].size()) == word[j]) {
                can2 = true
            }
        }
    }
}