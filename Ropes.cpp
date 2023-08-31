#include <bits/stdc++.h>
using namespace std;
bool good(vector <int> &ropes, int k, double x){
    int cnt = 0;
    for (const auto &i : ropes) {
        cnt += floor(i / x);
    }
    return cnt >= k;
}
int main() {
    int n, k;
    while (cin>>n>> k) {
        vector <int> ropes(n);
        for (int i = 0; i < n; i++) {
            cin>>ropes[i];
        }
        double lo = 0.0, hi = 1e7 + 1;
        for (int i = 0; i < 100; i++) {
            auto mid = lo + (hi - lo) / 2;
            if (good(ropes, k, mid)) {
                lo = mid;
            } else {
                hi = mid;
            }
        }
        cout<<setprecision(20)<<lo<< endl;
    }
}
