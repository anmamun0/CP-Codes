#include <bits/stdc++.h>
typedef long long ll;
#define vl vector<ll> 
#define vi vector<int> 
#define in_range(i,s,n) for(int i=s; i<=n; i++)
#define in_range(i,s,n) for(int i=s; i<=n; i++)
#define in_range_back(i,s,n) for(int i=n ; i >= s; i--)
#define take_array(v,n) in_range(i,0,n) cin>>v[i]
#define print_array(v) for(auto c:v){cout<<c<<" ";}cout<<ln
#define erase_duplicates(x) x.erase(unique(all(x)),x.end());
#define cin2(a, b) cin >> a >> b;
#define cin3(a, b, c) cin >> a >> b >> c;
#define all(x) x.begin(),x.end()
#define all_0(x) memset(x,0,sizeof(x))
#define isEven(x) ((x&1)== 0)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define enter cout << "\n"
#define ln '\n'
#define PQ priority_queue
#define Hashmap unordered_map
#define pb push_back
#define gcC int main()
#define checkmate return 0;
 
using namespace std;
// using namespace __gnu_pbds;
vector<ll> Div(ll n)
{
    vector<ll> x;
    for (int i = 1; i * i <= n; i++) // sqrt(n);
    {
        if (n % i == 0)
        {
            x.pb(i);
            if(n/i != i) x.pb(n / i);
        }
    }
    return x;
}
gcC
{
  /* _Coder   : anmamun0
     _Created : 16 May 2024 ||  02:22:59
     _File    : A_k_th_divisor.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;   cin2(n, k);

    vector<ll> Divisor = Div(n);
    sort(all(Divisor));

    if(Divisor.size()<k)cout << -1 << endl;
    else cout<<Divisor[k-1]<<endl;

    checkmate;
}