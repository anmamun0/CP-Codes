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
namespace AN{inline void yes(){cout<<"YES\n";}void no(){cout<<"NO\n";}bool isEven(auto x){return ((x&1)==0);} bool isPlus(auto x){return (x>=0);} 
    int len(auto x){return (int)(x).size();} template <typename T> void input(vector<T> &v) { for (auto &c : v) cin >> c; } 
    template <typename T> void print(vector<T> v){ for(auto c:v)cout<<c<<" ";}char ln = '\n';}
using namespace AN;
const int  maxN = 1e5 + 9, inf = 1e9+9;
int v[maxN];
struct code
{
    int mn, count; 
};
code Tree[4*maxN];

code merge(code left, code right)
{
    code ans;
    ans.mn = min(left.mn, right.mn);
    ans.count = 0;

    if(left.mn == ans.mn)
    {
        ans.count += left.count;
    }
    if(right.mn == ans.mn)
    {
        ans.count += right.count;
    }
    return ans;
}
void build(int node, int l, int r)
{
    if(l==r)
    {
        Tree[node].mn = v[l];
        Tree[node].count = 1;
        return;
    }

    int mid = (l + r) / 2;
    int leftNode = (2 * node), rightNode = (2 * node) + 1;

    build(leftNode, l, mid);
    build(rightNode, mid + 1, r);

    Tree[node] = merge(Tree[leftNode], Tree[rightNode]);

}

void update(int node, int l, int r, int idx, int val)
{
    if(idx<l || idx>r)return;

    if(l==r)
    {
        Tree[node].mn = val;
        Tree[node].count = 1;
        return;
    }

    int mid = (l + r) / 2;
    int leftNode = (2 * node), rightNode = (2 * node) + 1;

    update(leftNode, l, mid, idx, val);
    update(rightNode, mid+1, r, idx, val);

    Tree[node] = merge(Tree[leftNode], Tree[rightNode]);
}

code query(int node, int l, int r, int start, int end)
{

    if(r<start or l>end)return {inf,1};

    if (l >= start and r <= end)
    {
        return Tree[node];
    }

    int mid = (l + r) / 2;
    int leftNode = (2 * node), rightNode = (2 * node) + 1;

    code left = query(leftNode, l, mid, start, end);
    code right = query(rightNode, mid + 1, r, start, end);

    return merge(left, right);
}

int main()
{
  /* _Coder   : anmamun0
     _Created : 10 September 2024 ||  02:04:13
     _File    : C_Number_of_Minimums_on_a_Segment.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q; input(n,q);
    for(int i = 1; i<=n; i++)cin>>v[i];
    build(1, 1, n);

    while(q--)
    {
        int o; input(o);
        if(o==1)
        {
            int idx, val; input(idx,val);
            idx++;
            update(1, 1, n, idx, val);
        }
        else
        {
            int start, end; input(start,end);
            start++;
            code ans = query(1, 1, n, start, end);
            cout << ans.mn<<" "<<ans.count << endl;
        }
    }

   

    checkmate 0;
}