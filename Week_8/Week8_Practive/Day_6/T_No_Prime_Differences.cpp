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
gcC
{
  /* _Coder   : anmamun0
     _Created : 03 June 2024 ||  23:58:56
     _File    : T_No_Prime_Differences.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;  cin >> T;
    while(T--)
    {
        int x, y;   cin2(x,y);

        vector<vi> v(x , vi(y));
        int n = 1;
        for (int i = 0; i<x; i++)
        {
            for(int j = 0; j<y; j++)
            {
                v[i][j] = n;
                n++;
            }
        }

        vector<vector<int>> ans ;
        for(int i =1; i<x; i+=2) ans.pb(v[i]); 
        for(int i = 0; i<x; i+=2)ans.pb(v[i]);

        for(auto c:ans)
        {
            for(auto d:c)cout<<d<<" ";
            enter;
        }
        enter;
    }

    checkmate;
}