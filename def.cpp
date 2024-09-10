#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()

using ull = unsigned long long;
using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vector<int>>;
using vvll = vector<vector<ll>>;
using vpii = vector<pii>;
using vpll = vector<pll>;
using vvpii = vector<vector<pii>>;
using vvpll = vector<vector<pll>>;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define dbg(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define dbg(x...)
#endif

inline long long nth_prime(long long a) { a++;if(a <= 6) return (vector<long long>{2,3,5,7,11,13,17})[a]; long double lg = log((long double) a); return (long long) floor(a * (lg + log(lg))); }
inline long long mod_exp(long long base, long long exp, long long modd) { unsigned long long ans = 1; base %= modd; while(exp > 0) { if(exp%2==1) ans = (base*ans)%modd; exp /= 2; base = (base*base)%modd; } return ans; }
inline string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
inline string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }

bool fIO() {
    ios::sync_with_stdio(false);
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    return true;
}
bool y4555123 = fIO();
const ll MOD = 1e9 + 7;
const ll BIGMOD = pow(2,60)+33;
void solve() {
    
}
int main() {
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) {
        solve();
    }
}