#include <bits/stdc++.h>
#include <iostream>
#include<queue>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define inp(arr,n)                     for(int i=0; i<n; i++){ll A; cin>>A; arr.push_back(A);}
#define show(arr)                       for(auto i:arr) cout<<i <<" ";  cout << "\n";
ll min(ll a,int b) { if (a<b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
void seive(ll n){

}

void solve(){
    ll n,p;
    cin>>n>>p;
    vll arr,brr;
    inp(arr,n);
    inp(brr,n);
    ll c=0;
    c=1;
    ll cost = p;
    priority_queue<pll,vector<pll>,greater<pll> >pq;
    for(int i=0;i<n;i++){
        pq.push(make_pair(brr[i],arr[i]));
    }

    for(int i=0;i<n;i++){
        if(c==n) break;
        ll minPrice = pq.top().first;
        ll perLeft = pq.top().second;
        pq.pop();
        if(minPrice<p){
            c=c+1;
            perLeft--;
            cost+=minPrice;
            if(perLeft>0){
                pq.push(make_pair(minPrice,perLeft));
            }
        }
        else{
            c=c+1;
            cost+=p;
        }

    }
    cout<<cost<<endl;
   



}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);                             
    ll t;
    cin >>t;
    while(t--){
      solve();
    }
        
}
