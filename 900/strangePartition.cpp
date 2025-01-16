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
pair<ll,ll> findFar(ll i,ll j,ll n,ll m){

    ll d1 = abs(i-0) + abs(j-0);
    ll d2 = abs(i-0) + abs(j-(m-1));
    ll d3 = abs(i-(n-1)) + abs(j-0);
    ll d4 = abs(i-(n-1)) + abs(j-(m-1));
    vll a;
    a.push_back(d1);
    a.push_back(d2);
    a.push_back(d3);
    a.push_back(d4);

    sort(a.begin(),a.end(),greater<ll>());
    ll far1 = a[0];

    ll x1=-1,y1=-1;

    if(d1==far1){
        x1 = 0;
        y1=0;
    }
    else if(d2==far1){
         x1 = 0;
        y1=m-1;
    }
    else if(d3==far1){
         x1 = n-1;
        y1=0;
    }
    else if(d4==far1){
         x1 = n-1;
        y1=m-1;
    }
    return {x1,y1};

}

void solve() {
    ll n,x;
    cin>>n>>x;
    vll a;
    inp(a,n);
    ll fl=0;
    ll maxi = 0;
    ll s= 0;
    for(int i=0;i<n;i++){
        s+=a[i];
        if(a[i]%x!=0){
            fl=1;
            
        }
        maxi += ceil((double)a[i]/(double)x);
    }
    // if(fl==0){
    //     cout<<maxi<<" "<<maxi<<endl;
    //     return;
    // }
    
    
    cout<<(ll)ceil((double)s/(double(x)))<<" "<<maxi<<endl;


    
   
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