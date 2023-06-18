#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N; 
    vector<int> A(N, 0);
    int temp;
    for (int i = 0; i < 3 * N; i++) {
        cin >> temp;
        A[temp - 1]+=1;
        if (A[temp - 1] == 2) {
            cout << temp << " ";
        }
    }
    cout << endl;
}

.