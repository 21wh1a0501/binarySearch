#include <bits/stdc++.h>
using namespace std;
/*-------------------------------------------------------------------------------------------------*/
typedef long long ll;
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define all1(x) (x).begin(), (x).end(), greater <ll>() 
#define ff first
#define ss second
#define f(i,s,e) for(long long int i = s; i < e; ++i)
#define cf(i,s,e) for(long long int i = s; i <= e; ++i)
#define rf(i,e,s) for(long long int i = e-1; i >= s; --i)
const int mod = 1e9 + 7;
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
/*-------------------------------------------------------------------------------------------------------------------------------------------------------------*/
void solve(vector <int> &a, int left, int right){
    const auto l = lower_bound(all(a), left);
    if (l == a.end()) {
        cout << 0 << " ";
    }
    else {
        const auto h = upper_bound(l, a.end(), right);
        cout<<h - l<< " ";
    }
}

int main()
{
    int t = 1;
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    while(t--){
        int n;
        cin>>n;
        vi a(n);
        f(i, 0, n){
            cin>>a[i];
        }
        sort(all(a));
        int q;
        cin>>q;
        while(q--){
            int left, right;
            cin>>left>>right;
           solve(a, left, right);
        }
    }
    return 0;
}

