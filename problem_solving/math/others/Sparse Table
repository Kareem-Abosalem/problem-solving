#include <bits/stdc++.h>
using namespace std;

#define int long long
            
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
int di[] = {0,  0,  1, -1,  1,  1, -1, -1};
int dj[] = {1, -1, 0,  0,  1, -1,  1, -1};

const int N = 1e5+5, mod=1e9+7, oo = 2e18;

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int n;
vector<vector<int>>sp;
int merge(int a,int b)
{
    return min(a,b); // change based on question 
}
void build(const vector<int>&v)
{
    sp[0] = v;
    for (int msk = 1; (1 << msk) <= n ; msk++)
    {
        int sz = 1 << msk;
        for (int i = 0; i + sz -1 < n; i++)
        {
            sp[msk][i] = merge(sp[msk-1][i],sp[msk-1][i + (1 << msk) / 2]);
        }
        
    }
}
int query(int l, int r)
{
    int res = oo; // change based on question 
    int len = r - l + 1;
    for (int msk = 0; l <= r; msk++)
    {
        if(len & (1 << msk)){
            res = merge(res,sp[msk][l]);
            l += (1 << msk);
        }
        
    }
    return res;
}
int queryO1(int l, int r)
{
    // valid (min, max, gcd) -> allow overlapping
    int sz = r - l + 1;
    int msk = __lg(sz);
    return merge(sp[msk][l],sp[msk][r - (1 << msk) + 1]);
}
void solve() 
{
    cin >> n;
    vector<int>v(n);
    for(auto &i : v) cin >>i;

    sp = vector<vector<int>>(__lg(n)+1,vector<int>(n));
    build(v);
    int q; cin >> q;
    while (q--)
    {
        int l, r; cin >> l >> r;
        l--, r--;
        cout << query(l,r) << '\n';
    }
    

}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    file();
    //int tc;cin>>tc;while(tc--)
    solve();

    return 0;
}
