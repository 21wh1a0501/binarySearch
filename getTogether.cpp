#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool good(int n,  vector <int> &x, vector <int> &v, double m){
    double l = -1e10;
    double r = 1e10;
    for (int i = 0; i < n; i++) {
        double xl = x[i] - m * v[i];
        double xr = x[i] + m * v[i];

        l = max(l, xl);
        r = min(r, xr);

        if (l > r) {
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector <int> x(n);
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin>>x[i]>>v[i];
    }
    double l = 0;
    double r = 1e18;
    for(int i = 0; i < 100; i++){
        double m = (l + r) / 2;
        if(good(n, x, v, m)){
            r = m;
        }
        else{
            l = m;
        }
    }
    cout<<setprecision(10)<<r<<"\n";
    return 0;
}
