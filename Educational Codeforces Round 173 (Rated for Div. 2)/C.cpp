#include <bits/stdc++.h>
#include <set>
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
ll kadane(vll &arr){ //finds maximum subarray sum in O(n) time
    if(arr.size()==0){
        return 0ll;
    }
    ll s = 0;
    ll n = arr.size();
    ll maxi = 0;
    for(int i=0;i<n;i++){
        s += arr[i];
        if(s>=maxi){
            maxi= s;
        }
        if(s<0){
            s=0;
        }
    }
    return maxi;

}
void showRange(ll left,ll right){
    for(ll i=left;i<=right;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

void solve(){
    ll n;
    cin>>n;
    vll a;
    inp(a,n);
    ll pos = -1;
    vll negArr;
    for(int i=0;i<n;i++){
        negArr.push_back(a[i]*-1);
    }

    for(int i=0;i<n;i++){
        if(a[i]!=-1 && a[i]!=1){
            pos = i;
            break;
        }
    }

    if(pos==-1){
        ll maxi =  kadane(a);
        ll mini = -1*kadane(negArr);
        cout<<maxi-mini+1<<endl;
        showRange(mini,maxi);
        return ;
    }

    vll left;
    vll negLeft;
    left.push_back(0);
    negLeft.push_back(0);
    for(int i=pos-1;i>=0;i--){
        left.push_back(a[i]);
        negLeft.push_back(a[i]*-1);
    }
    vll right;
    vll negRight;
    right.push_back(0);
    negRight.push_back(0);
    for(int i=pos+1;i<n;i++){
        right.push_back(a[i]);
        negRight.push_back(a[i]*-1);
    }
   
    
    ll minS = kadane(negLeft)*-1;
    ll maxS = kadane(left);

    ll minP = kadane(negRight)*-1;
    ll maxP = kadane(right);

    set<ll>st;
    st.insert(left.begin(),left.end());
    st.insert(right.begin(),right.end());
    for(ll i=minS;i<=maxS;i++){
        st.insert(i);
    }
    for(ll i=minP;i<=maxP;i++){
        st.insert(i);
    }

    for(ll i = minS+minP+a[pos];i<=maxS+maxP+a[pos];i++){
        st.insert(i);
    }
    



    cout<<st.size()<<endl;
    vll ans;
    for(auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;
    show(ans);
    
    


    

    

    
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
