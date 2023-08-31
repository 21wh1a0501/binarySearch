#include <bits/stdc++.h>
using namespace std;
bool good(int n, int k, vector<int>& v, int m) {
    int c = 1;
    int p = 0;
    for (int i = 1; i < n; i++) {
        if (v[i] - v[p] >= m) {
            c++;
            p = i;
        }
    }
    return c >= k;
}

int main() {
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int l = 0;
    int r = 1e9+5;
    while (r > l + 1) {
        int m = (l + r) / 2;
        if (good(n, k, v, m)) {
            l = m;
        } else {
            r = m;
        }
    }
    cout<<l<<endl;

    return 0;
}
