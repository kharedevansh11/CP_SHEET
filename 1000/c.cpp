/*----------------------- Directives -----------------------*/
#include <bits/stdc++.h>
#include <set>
#include <iostream>
#include <queue>
/*----------------------- Namespaces -----------------------*/
using namespace std;
/*------------------------- Macros -------------------------*/
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
ll findMin(vll &a){
    ll mini = INT_MAX;
    for(auto it:a){
        mini= min(mini,it);
    }
    return mini;
}
ll findSecMin(vll &a,ll mini){
    int fl = 0;
    for(auto it:a){
        if(it==mini) fl++;
    }
    if(fl>1) return mini;
    ll secMin = INT_MAX;
    for(auto it:a){
        if(it>mini){
            secMin=min(secMin,it);
        }
    }
    return secMin;

}
void solve() {
   ll n,m;
   cin>>n;
   vll ans;
   ans.push_back(1);
   
   ans.push_back(1);
   for(int i=2;i<n-4;i++){
    ans.push_back(i);
   }
   ans.push_back(1);
   ans.push_back(2);
   show(ans);

   
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