#include <bits/stdc++.h>
#include <set>
#include <iostream>
#include <queue>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define inp(arr, n)             \
    for (int i = 0; i < n; i++) \
    {                           \
        ll A;                   \
        cin >> A;               \
        arr.push_back(A);       \
    }
#define show(arr)         \
    for (auto i : arr)    \
        cout << i << " "; \
    cout << "\n";
ll min(ll a, int b)
{
    if (a < b)
        return a;
    return b;
}
ll max(int a, ll b)
{
    if (a > b)
        return a;
    return b;
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
string to_upper(string a)
{
    for (int i = 0; i < (int)a.size(); ++i)
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] -= 'a' - 'A';
    return a;
}
string to_lower(string a)
{
    for (int i = 0; i < (int)a.size(); ++i)
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 'a' - 'A';
    return a;
}
bool prime(ll a)
{
    if (a == 1)
        return 0;
    for (int i = 2; i <= round(sqrt(a)); ++i)
        if (a % i == 0)
            return 0;
    return 1;
}
void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }
void seive(ll n)
{
}


void solve() {
    ll n, m;
    cin >> n >> m;
    string str;
    cin >> str;
    
  
    vector<vector<ll>> a(n, vector<ll>(m));
    for(int x = 0; x < n; x++) {
        for(int j = 0; j < m; j++) {
            cin >> a[x][j];
        }
    }

    ll i=0,j=0;
    ll s=0;
    for(ll k=0;k<n+m-2;k++){
        if(str[k]=='R'){
             s=0;
            for(ll x=0;x<n;x++){
                s+=a[x][j];
            }
            a[i][j] = 8+(-1*s);
            j++;
        }
        else{
           
            s=0;
            for(ll x =0;x<m;x++){
                s+=a[i][x];
            }

            a[i][j]=8+(-1*s);
            i++;
        }
    }
    s=0;

    for(int i=0;i<n;i++){
        s += a[i][m-1];
    }

    a[n-1][m-1]=8+(-1*s);


    
   
    
   
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}