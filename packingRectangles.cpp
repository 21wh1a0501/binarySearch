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

bool good(ll x, ll w, ll h, ll n){
    return (x / w) * (x / h) >= n;
}

int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll w, h, n;
    cin>>w>>h>>n;
    ll l = 0;
    ll r = 1;
    while(!good(r, w, h, n)){
        r = r * 2;
    }
    while(r - l > 1){
        ll m = (l + r) / 2;
        if(good(m, w, h, n)){
            r = m;
        }
        else{
            l = m;
        }
    }
    cout<<r<<"\n";
    return 0;
}
