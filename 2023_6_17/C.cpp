#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(3 * N);
    for (int i = 0; i < 3 * N; ++i) {
        cin >> A[i];
    }

    map<int, vector<int>> frequency;
    for (int i = 0; i < 3 * N; ++i) {
        frequency[A[i]].push_back(i + 1);
    }

    vector<int> sorted_nums(N);
    int index = 0;
    for (int i = 1; i <= N; ++i) {
        sorted_nums[index++] = i;
    }

    sort(sorted_nums.begin(), sorted_nums.end(), [&](int a, int b) {
        return frequency[a][1] < frequency[b][1];
    });

    for (int i = 0; i < N; ++i) {
        cout << sorted_nums[i] << " ";
    }
    cout << endl;

    return 0;
}
