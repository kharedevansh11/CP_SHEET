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
ll findMin(vll &a)
{
    ll mini = INT_MAX;
    for (auto it : a)
    {
        mini = min(mini, it);
    }
    return mini;
}
ll findSecMin(vll &a, ll mini)
{
    int fl = 0;
    for (auto it : a)
    {
        if (it == mini)
            fl++;
    }
    if (fl > 1)
        return mini;
    ll secMin = INT_MAX;
    for (auto it : a)
    {
        if (it > mini)
        {
            secMin = min(secMin, it);
        }
    }
    return secMin;
}
/*----------------------- WHERE THE ACTUAL CODE BEGINS -----------------------*/
void solve()
{
    ll n;
    cin >> n;
    vll a, b;
    inp(a, n);
    inp(b, n);
    set<ll> st;
    unordered_map<ll, ll> mp1;
    unordered_map<ll, ll> mp2;
    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
        mp1[a[i]]=1;
        st.insert(b[i]);
        mp2[b[i]]=1;
    }

    ll c = 1;
    ll maxi = c;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            c++;
            maxi = max(maxi, c);
            ll val = mp1[a[i]];
            if (maxi >= val)
            {
                mp1[a[i]] = maxi;
            }
        }
        else
        {
            c = 1;
            maxi=1;
            // mp1[a[i]]=1;
        }
    }
    if (c > 0)
    {
        maxi = max(maxi, c);
        ll val = mp1[a[n-1]];
        if (maxi >= val)
        {
            mp1[a[n-1]] = maxi;
        }
    }

    c=1;
    maxi=1;

    for (int i = 0; i < n - 1; i++)
    {
        if (b[i] == b[i + 1])
        {
            c++;
            maxi = max(maxi, c);
            ll val = mp2[b[i]];
            if (maxi >= val)
            {
                mp2[b[i]] = maxi;
            }
        }
        else
        {
            c = 1;
            maxi=1;
            // mp2[b[i]]=1;
        }
    }
    if (c > 0)
    {
        maxi = max(maxi, c);
        ll val = mp2[b[n-1]];
        if (maxi >= val)
        {
            mp2[b[n-1]] = maxi;
        }
    }

    ll ans = 0;
    for(auto it:st){
        ans = max(ans , mp1[it]+mp2[it]);
    }
    
    cout<<ans<<endl;




}

/*----------------------- MAIN FUNCTION -----------------------*/
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
    return 0;
}