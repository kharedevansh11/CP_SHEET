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

void solve()
{
   ll n,k,x;
   cin>>n>>k>>x;
   if(x!=1){
    yes();
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<1<<" ";
    }
    cout<<endl;
    return;
   }
   if((k==2 && n%2!=0) || (k==1 && x==1)){
    no();
    return;
   }

   yes();
   if(n%2==0){
    cout<<n/2<<endl;
    for(int i=0;i<n/2;i++){
        cout<<2<<" ";
    }
    cout<<endl;
   }
   else{
    cout<<n/2<<endl;
    for(int i=0;i<(n/2 -1);i++){
        cout<<2<<" ";
    }
    cout<<3<<endl;
    
   }

   
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
