#include<bits/stdc++.h>
using namespace std;

// Short forms
#define ll                  long long
#define ull                 unsigned long long
#define nl                  '\n'
#define ff                  first
#define ss                  second
#define all(x)              x.begin(), x.end()
#define sz(x)               (int)(x).size()
#define pb                  push_back
#define mp                  make_pair

// Loops
#define nlp(i, n)           for (int i = 0; i < (int)(n); ++i)
#define lp(i, a, b)         for (int i = (int)(a); i < (int)(b); ++i)
#define rlp(i, a, b)        for (int i = (int)(a); i > (int)(b); --i)
#define llp(i,a,b)          for (ll i= (ll)(a); i < (ll)(ll)(b); ++i)

// STLs
#define pii                 pair<int, int>
#define vi                  vector<int>
#define vll                 vector<ll>
#define vvi                 vector<vector<int>>
#define vvl                 vector<vector<ll>>

// Outputs
#define yes                 cout<<"YES"<<nl
#define no                  cout<<"NO"<<nl
#define dbg(x)              cerr << #x <<" "<< x << endl;

// Constants
#define PI                  3.141592653589793238
#define INF                 LONG_LONG_MAX
#define MOD                 1e9+7

// Faster Input Output
#define FAST_IO             (ios_base:: sync_with_stdio(false),cin.tie(NULL));

// Maths
ll fact(ll n)          { if(n==0) return 1; ll res = 1; for (ll i = 2; i <= n; i++) res = res * i; return res; }
ll nPr(ll n, ll r)     { return fact(n) / fact(n - r); }
ll nCr(ll n, ll r)     { return fact(n) / (fact(r) * fact(n - r)); }
ll gcd(ll a, ll b)     { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b)     { return (a * b) / gcd(a, b);}
ll mypow(ll a, ll b)   { ll ans = 1; while(b){ if (b&1) ans = (ans*a) ; b /= 2; a = (a*a); } return ans; }
//ll getPrime(ll n)      { while (n % 2 == 0) {return 2;n = n/2;} for (ll i = 3; i <= sqrt(n); i = i + 2) {while (n % i == 0) {return i;n = n/i;} } if (n > 2)return n; }
bool isPrime(ll n)     { if(n <= 1) return false; for(ll i = 2; i <= sqrt(n); i++) if(n % i == 0) return false; return true; }
bool cmp(const pair<int,int> &a, const pair<int,int> &b) { return (a.ff != b.ff) ? (a.ff > b.ff) : (a.ss < b.ss); }



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void solve(){

ll n; cin>>n;

ll sum = (n*(n+1)/2);

if(sum%2 == 1){
    no; return;
}
yes;

ll target = sum/2;

set<ll> s1,s2;

for(int i = 1; i <= n; i++){
    s1.insert(i);
}

for(int i = n; i >= 1; i--){
    if(s1.count(i) != 0 && target >= i){
        //cout << i << endl;
        s2.insert(i);
        s1.erase(i);
        target = target - i;
    }else{
        continue;
    }
}

cout << s1.size() << endl;
for(int i = 1; i <= n; i++) {
    if(s2.count(i) == 0){
        cout << i << " ";
    }
}
cout << endl << s2.size() << endl;
for(auto i: s2) {
    cout << i << " ";
}
cout << endl;

    
}
 
int main()
{
    FAST_IO;
    int TC = 1;
    //cin >> TC;
    while (TC--) solve();
}