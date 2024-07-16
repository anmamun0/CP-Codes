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
#define  isEven(x) ((x&1)== 0)
#define  isPlus(x) (x>=0)
#define  all(x) x.begin(),x.end() 
#define  len(x) (int) (x).size()
#define  Public int T; input(T);while(T--)
#define  checkmate return  
#define  __stop print('\n');
#define Run(i, x, y) for (int _s=x, _e=y, _in=(y>x)?1:-1, i=_s;((_in==1)?(i<=_e):(i>=_e)); i+=_in)
template <typename... DataIn> void input(DataIn&... val){(cin >> ... >> val);}
template <typename... DataOut> void print(const DataOut&... val){((cout << val), ...);} 
template <typename T> void input(vector<T>& v){for(auto &c:v)cin>>c;}
template <typename T> void print(vector<T>& v){for(auto c:v)cout<<c<<" ";}
namespace AN{inline void yes(){print("YES\n");} void no(){print("NO\n");} char ln='\n';}
using namespace AN;
int div(vector<int>&v)
{
    int sum = 0;
    for (int i = 0; i < v.size()-1; i++)
    {
        sum += abs(v[i] - v[i + 1]);
    }
    return sum;
}

int main()
{
  /* _Coder   : anmamun0
     _Created : 15 July 2024 ||  12:10:06
     _File    : Large_Differences.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Public
    {
        int n, k; input(n,k);
        vector<int> v(n); input(v);

        int result = 0;

        for(int i = 0; i<n; i++)
        {
            vector<int> abc = v;

            abc[i] = 1;
            int a = div(abc);  

            abc[i] = k; 
            int b = div(abc); 

            result = max({result,a,b});
        } 
        print(result, ln);
    }

    checkmate 0;
}