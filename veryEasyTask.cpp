#include <bits/stdc++.h>
using namespace std;
bool good(int n, int x, int y, int t){
    int cnt = 0;
    if (t < min(x, y)) {
        cnt = 0;
    }
    else{
        cnt = 1 + (t - min(x, y)) / x + (t - min(x, y)) / y;
    }
    return cnt >= n;
}
int main() {
        int n, x, y;
        cin>>n>>x>>y;
        int lo = 0, hi = n * min(x, y);
        while(hi - lo > 1) {
            auto mid = lo + (hi - lo) / 2;
            if (good(n, x, y, mid)) {
                hi = mid;
            } else {
                lo = mid;
            }
        }
        cout<<hi<< endl;
}
