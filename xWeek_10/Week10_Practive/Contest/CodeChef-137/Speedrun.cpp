#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> 
using Segment_tree = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
typedef pair<int, int> couple;
#define  str string
#define  X first
#define  Y second
#define  pb push_back
#define  all(x) x.begin(),x.end() 
#define  Public int T; input(T);while(T--)
#define  checkmate return  
#define  __stop print('\n');
#define Run(i, x, y) for (int _s=x, _e=y, _in=(y>x)?1:-1, i=_s;((_in==1)?(i<=_e):(i>=_e)); i+=_in)
template <typename... DataIn> void input(DataIn&... val){(cin >> ... >> val);}
template <typename... DataOut> void print(const DataOut&... val){((cout << val), ...);}  
namespace AN{inline void yes(){cout<<"YES\n";}void no(){cout<<"NO\n";}bool isEven(auto x){return (x&1==0);} bool isPlus(auto x){return (x>=0);} 
    int len(auto x){return (int)(x).size();} 
    template <typename T> void input(vector<T> &v) { for (auto &c : v) cin >> c; } 
    template <typename T> void print(vector<T> v){ for(auto c:v)cout<<c<<" ";}char ln = '\n';}
using namespace AN;

int main()
{
  /* _Coder   : anmamun0
     _Created : 16 July 2024 ||  21:37:58
     _File    : Speedrun.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Public
    {
        int n, k; input(n,k);
        vector<int> v(n); input(v);
        vector<int> h(n); input(h);

        int time_spend = 0;
        bool filed = false;
        bool pass = true;

        for (int i = 0;i<n ;i++)
        {
            if(v[i] >= time_spend+h[i])
            {
                time_spend += h[i];
                continue;
            } 
            if(filed)
            {
                pass = false;
                break;
            } 
            int j = i;
            while(j<n and (v[j]-v[i]) <= 2*k) j++; 
            i--,j--;

            while(i>=0 and (v[j]-v[i]) <= 2*k)
            {
                time_spend -= h[i];
                i--;
            }
            i = j;
            filed = true;
        } 
        (pass) ? yes() : no();
    }

    checkmate 0;
}