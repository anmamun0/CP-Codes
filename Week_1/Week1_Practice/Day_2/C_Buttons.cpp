#include <bits/stdc++.h>
#define ll long long
#define vector vector<ll> 
#define loop(i,s,n) for (int i = s; i <n; i++)
#define sort(v) sort(v.begin(), v.end())
using namespace std;
int main()
{
    // User : AN.Mamun
    // Data : 2024 March 7
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;


    int mx = max(a, b);
    int mn = min(a, b);

    int sum = mx;

    ((mx - 1) > mn) ? sum += (mx - 1) : sum += mn;

    cout << sum << '\n';

    return 0;
}