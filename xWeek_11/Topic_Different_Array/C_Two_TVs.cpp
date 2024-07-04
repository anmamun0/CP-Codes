#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> 
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
#define str string
#define X first
#define Y second
#define pb push_back
#define isEven(x) ((x&1)== 0)
#define isPlus(x) (x>=0)
#define all(x) x.begin(),x.end() 
#define Public int T; input(T);while(T--)
#define checkmate return 
#define Run(i, x, y) for (int _s=x, _e=y, _dir=(y>x)?1:-1, i=_s;((_dir==1)?(i<=_e):(i>=_e)); i+=_dir)
template <typename... DataIn> void input(DataIn&... val){(cin >> ... >> val);}
template <typename... DataOut> void print(const DataOut&... val){((cout << val), ...);} 
template <typename T> void input(vector<T>& v){for(auto &c:v)cin>>c;}
template <typename T> void print(vector<T>& v){for(auto c:v)cout<<c<<" ";}
namespace AN{void yes() { print("YES\n");} void no(){print("NO\n");} void Enter() {print("\n");} char ln='\n';
    template<typename Q> inline void Erase_duplicate(vector<Q>& v) { sort(all(v)); v.erase(unique(all(v)),v.end());}}
using namespace AN;

int main()
{
  /* _Coder   : anmamun0
     _Created : 17 June 2024 ||  23:45:28
     _File    : C_Two_TVs.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; input(n);

    map<int, int> mp;
    for(int i = 1; i<=n; i++)
    {
        int l, r;   input(l,r);
        mp[l]++;
        mp[r+1]--;
    }

    int sum = 0;
    bool ok = true;
    for(auto c:mp)
    {
        sum += c.Y;
        if(sum>2)
        {
            ok = false;
            break;
        }
    }
    (ok) ? yes() : no();

    checkmate 0;
}

// https://codeforces.com/problemset/problem/845/C

/*
input: 3
1 2
2 3
4 5
output:
YES

idx:    0 1 2  3 4 5  6
Time:   0 1 1 -1 0 0 -1
prfix : 0 1 2  1 1 1  0 
*/