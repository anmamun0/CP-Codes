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
     _Created : 08 May 2024 ||  12:25:54
     _File    : F_String_Game.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string t, p;    cin2(t, p);
    int n = t.size(), m = p.size();

    vi v(n);        take_array(v, n);


    auto ok = [&](int mid) -> bool
    {
        vector<bool> cross(n + 1); 
        in_range(i, 0, mid - 1) cross[v[i]] = true;

        bool found = false;
        int j = 0;
        for (int i = 0; i<n; i++)
        {
            if(t[i] == p[j] and !cross[i+1]) j++;
            if(j == m)
            {
                found = true;
                break;
            }
        }
        return found;
    };

    int l = 0, r = t.size(), ans = 0;
    while(l<=r)
    {
        int mid = l + (r - l) / 2;
        if(ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }else r = mid - 1;
    }
    cout << ans << "\n";

    checkmate;
}