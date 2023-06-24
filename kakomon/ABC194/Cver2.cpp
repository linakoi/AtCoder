#include <bits/stdc++.h>

#define rep(i, s, n) for (int i = (int)(s); i < (int)(n); ++i)

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];

    long long ans = 0;
    long long sum = 0;
    rep(i, 0, n) {
        ans += (long long)(n-1) * a[i] * a[i];

        if(i != n-1) {
            sum += a[n-i-1];
            ans += -2 * a[n-i-2] * sum;
        } 
    }

    cout << ans << endl;
}