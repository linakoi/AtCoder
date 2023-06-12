#include <bits/stdc++.h>
using namespace std;

int main() {
    int H,W;
    cin >> H >> W;
    vector<vector<char>> grid(H, vector<char>(W));
    int mleft = W,mright = 0,mtop = W,mbottom = 0;


    for(int i =  0;i < H;i++) {
        for(int j = 0;j < W;j++) {
            cin >> grid[i][j];
        }
    }
    /*
    cout << endl;
    */

    for(int i = 0;i < H;i++) {
        for(int j = 0;j < W;j++) {
            if(grid[i][j] == '#' && mleft > j) mleft = j;
            if(grid[i][j] == '#' && mright < j) mright = j;
            if(grid[i][j] == '#' && mtop > i)mtop = i;
            if(grid[i][j] == '#' && mbottom < i)mbottom = i;
        }
    }
    
    /*
    for(int i =  0;i < H;i++) {
        for(int j = 0;j < W;j++) {
            cout << grid[i][j] << "";
        }
        cout << endl;
    }

    cout << endl << mleft << mright << mtop << mbottom << endl;
    */
    for(int i = mtop;i <= mbottom;i++) {
        for(int j = mleft;j <= mright;j++) {
            if(grid[i][j] == '.') cout << i+1<< " " << j+1 << endl;
        }
    }

} 
