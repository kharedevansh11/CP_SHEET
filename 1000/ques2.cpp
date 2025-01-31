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
   ll n,l,r;
   cin>>n>>l>>r;
   vll a;
   inp(a,n);
   priority_queue<ll,vll,greater<ll>>left;
   priority_queue<ll,vll,greater<ll>>right;

   priority_queue<ll>pq1;
   priority_queue<ll>pq2;
   l=l-1;
   r=r-1;
   for(int i=l;i<=r;i++){
    pq1.push(a[i]);
    pq2.push(a[i]);
   }
   

   for(int i=0;i<l;i++){
    left.push(a[i]);
   }
   for(int i=r+1;i<n;i++){
    right.push(a[i]);
   }

   ll leftSum = 0;
   ll rightSum = 0;
    // if(left.empty()) cout<<"empty";

   while(!left.empty()){
    if(left.top() < pq1.top()){
        ll pqTop =pq1.top();
        pq1.pop();
        ll leftTop = left.top();
        left.pop();
        pq1.push(leftTop);
    }
    else{
        break;
    }
   }

   while(!pq1.empty()){
    leftSum += pq1.top();
    pq1.pop();
   }

   while(!right.empty()){
    if(right.top() < pq2.top()){
        ll pqTop = pq2.top();
        pq2.pop();
        ll rightTop = right.top();
        right.pop();
        pq2.push(rightTop);
    }
    else{
        break;
    }
   }

   while(!pq2.empty()){
    rightSum += pq2.top();
    pq2.pop();
   }
   cout<<min(leftSum,rightSum)<<endl;



   
   
   
   
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