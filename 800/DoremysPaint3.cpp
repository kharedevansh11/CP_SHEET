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
    ll n;
    cin>>n;
    vll a;
    inp(a,n);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++) mp[a[i]]++;
    if(mp.size()>2){
         no();
         return;
    }
    else if(mp.size()==1) yes();
    else if(mp.size()==2){
        int fir = 0;
        ll sec = 0;
        int c=0;
        for(auto it:mp){
            c++;
            if(c==1) fir = it.second;
            if(c==2) sec = it.second;
        }
        int diff = abs(fir-sec);
        if(diff<=1) yes();
        else{
            no();
        }
    }

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
