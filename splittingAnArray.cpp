#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool good(int n, int k, vector <ll> &v, ll m){
    int c = 1;
    ll s = 0;
    for(int i = 0; i < n; i++){
        if(v[i] > m){
            return false;
        }
        if (s + v[i] > m) {
            s = v[i];
            c++;
        }
        else {
            s += v[i];
        }
    }
    return c <= k;
}


int main() {
    int n, k;
    cin>>n>>k;
    vector <ll> v(n);
    for (int i = 0; i < n; i++) {
        cin>>v[i];
    }
    ll l = 0;
    ll r = 1e16;
    while (r > l + 1) {
        ll m = (l + r) / 2;
        if (good(n, k, v, m)) {
            r = m;
        } else {
            l = m;
        }
    }
    cout<<r<<endl;

    return 0;
}
