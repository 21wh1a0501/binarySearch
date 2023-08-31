#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool good(ll rb, ll rs, ll rc, ll nb, ll ns, ll nc, ll pb, ll ps, ll pc, ll sum, ll m) {
    ll mb = m * rb;
    ll ms = m * rs;
    ll mc = m * rc;
    ll x = 0;
    x += max(mb - nb, 0LL) * pb;
    x += max(ms - ns, 0LL) * ps;
    x += max(mc - nc, 0LL) * pc;
    return x <= sum;
}

int main(){
    string r;
    ll nb, ns, nc;
    ll pb, ps, pc;
    ll sum;
    cin>>r;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>sum;
    ll rb = 0, rs = 0, rc = 0;
    for (int i = 0; i < r.size(); i++) {
        if (r[i] == 'B') {
            rb++;
        } else if (r[i] == 'S') {
            rs++;
        } else {
            rc++;
        }
    }
    ll l = 0;
    ll r1 = 1e15;
    while (r1 > l + 1) {
        ll m = (l + r1) / 2;
        if (good(rb, rs, rc, nb, ns, nc, pb, ps, pc, sum, m)) {
            l = m;
        } else {
            r1 = m;
        }
    }
    cout<<l<<"\n";
    return 0;
}
