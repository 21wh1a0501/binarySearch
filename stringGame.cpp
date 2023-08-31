#include <bits/stdc++.h>
using namespace std;
bool good(string &a, string &b, vector <int> &v, int mid){
    int idx = 0;
    for(int i = 0; i < a.size() && idx < b.size(); i++) {
        if (v[i] <= mid) continue;
        if (a[i] == b[idx]) {
            idx++;
        }
    }
    return idx == b.size();
}
int main() {
    string a, b;
    cin>>a>>b;
    int x;
    vector <int> v(a.size());
    for(int i = 1; i <= a.size(); i++){
        cin>>x;
        v[x - 1] = i;
    }
    int l = 0;
    int h = v.size();
    while(h - l > 1){
        int mid = (l + h) / 2;
        if(good(a, b, v, mid)){
            l = mid;
        }
        else{
            h = mid;
        }
    }
    cout<<l<<"\n";
}
