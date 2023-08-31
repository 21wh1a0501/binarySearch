#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool good(int k, int n, vector<ll> v, ll m) {
    ll sum = 0;
    for (auto x : v) {
        sum += min(m, x);
    }

    return sum >= m * k;
}
int main() {
    int k, n;
    cin >> k >> n;
    vector <ll> v(n);
    for (auto &x : v) {
        cin>>x;
    }
    ll l = 0;
    ll r = 1e17;
    while (r > l + 1) {
        ll m = (l + r) / 2;
        if (good(k, n, v, m)) {
            l = m;
        } else {
            r = m;
        }
    }
    cout << l << endl;
    return 0;
}
