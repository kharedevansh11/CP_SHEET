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
    ll a,b;
    cin >> a >> b;
    if(a==b){
        cout<<0<<" "<<0<<endl;
        return;
    }
    else if(a%b==0 || b%a==0){
        ll op=0;
        ll ans =0;
        if(abs(a-b)%min(a,b)==0){
             ans = abs(a-b);
            op = op + min(a,b);
        }
        cout<<ans<<" "<<op<<endl;
        return;
    }
    ll exci = abs(a-b);
    ll opsPos = 0;
    ll opsNeg = 0;
    ll temp1=a;
    ll temp2=b;
     while(a>0 && b>0 && gcd(a,b)!=exci){
        a--;
        b--;
        opsNeg++;
    }
    a=temp1;
    b = temp2;
    
    while(gcd(a,b)!=exci){
        a++;
        b++;
        opsPos++;
    }
    cout<<exci<<" "<<min(opsPos,opsNeg)<<endl;
   
   
   
    
    
   
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