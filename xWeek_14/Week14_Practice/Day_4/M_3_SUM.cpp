#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> 
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
typedef pair<int, int> couple;
#define  str string
#define  X first
#define  Y second
#define  pb push_back
#define  all(x) x.begin(),x.end() 
#define  testCase int T; input(T);while(T--)
#define  checkmate return  
#define  __stop print('\n');
#define Run(i, x, y) for (int _s=x, _e=y, _in=(y>x)?1:-1, i=_s;((_in==1)?(i<=_e):(i>=_e)); i+=_in)
template <typename... DataIn> void input(DataIn&... val){(cin >> ... >> val);}
template <typename... DataOut> void print(const DataOut&... val){((cout << val), ...);} 
namespace AN{inline void yes(){cout<<"YES\n";}void no(){cout<<"NO\n";}bool isEven(auto x){return (x&1==0);} bool isPlus(auto x){return (x>=0);} 
    int len(auto x){return (int)(x).size();} template <typename T> void input(vector<T> &v) { for (auto &c : v) cin >> c; } 
    template <typename T> void print(vector<T> v){ for(auto c:v)cout<<c<<" ";}char ln = '\n';}
using namespace AN;

int main()
{
  /* _Coder   : anmamun0
     _Created : 27 August 2024 ||  20:59:27
     _File    : M_3_SUM.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    testCase
    {
        int m; input(m);
        vector<ll> u(m); 
        map<int, int> mp;

        for(auto &c:u)
        {
            cin >> c;
            mp[c % 10]++;
        }

        vector<int> v;
        for(auto c:mp) v.insert(v.end(),min(3, c.Y),c.X);

        int n = v.size()-1;

        bool attack = false;

        Run(i,0,n-2)
        { 
            if(attack)break;
            Run(j,i+1,n-1)
            {
                if(attack)break;
                Run(k,j+1,n)
                {
                    int cum = v[i] + v[j] + v[k]; 
                    if(cum %10 == 3)
                    {
                        attack = true;
                        break;
                    }
                }
            }
        }  

        (attack) ? yes() : no();
    } 
    checkmate 0;
}

 