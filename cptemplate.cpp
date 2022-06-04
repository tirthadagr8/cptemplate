#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi M_PI
#define Size_N  int(1e3+10)
#define loop(i,s,e) for(int i=s;i<e;i++)
#define loopr(i,s,e) for(int i=s;i<e;i--)
using namespace std;

/* -- graph -- */
vector<bool> vis_1d;
vector<ll> graph_1d;
vector<vector<bool>> vis_2d;
vector<vector<ll>> graph_2d;
//vector<ll> graph_1d[Size_N];
//vector<vector<ll>> graph_2d[Size_N][Size_N];
void graphinput_2d(vector<vector<ll>> grid,ll n)
{
    graph_2d.resize(n);
    for(auto& pos:grid)
    {
        graph_2d[pos[0]].push_back(pos[1]);
        graph_2d[pos[1]].push_back(pos[0]);
    }
}
ll vecsum(vector<vector<ll>> vec)
{
    ll sum=0;
    loop(i,0,vec.size())
    loop(j,0,vec[0].size())
    sum+=vec[i][j];
    return sum;
}
ll vecsum(vector<ll> vec)
{
    ll sum=0;
    loop(i,0,vec.size())
    sum+=vec[i];
    return sum;
}
void dfs(ll i,ll j,vector<vector<ll>> grid,ll parent=-1)
{
    /* 1 way to go each cell */
    
    // IF YOU USE VERTEX/NODE IN PLACE OF COORDINATES
    
    // vis_1d[vertex]=true;
    // for(int child:g[vertex])
    // {
    //     if(vis_1d[child])
    //         continue;
    //     dfs(child);
    // }
    
    /*2 way to go each cell*/
    
    ll m=grid.size();
    ll n=grid[0].size();
    if(vis_2d[i][j])
        return;
    if(i>=0 && j>=0 and i<m and j<n)
        {
            //grid[i][j] = 0;
            vis_2d[i][j]=true;
            dfs(i + 1, j, grid);
            dfs(i - 1, j, grid);
            dfs(i, j - 1, grid);
            dfs(i, j + 1, grid);
        }
}
int rangeBitwiseAnd(int left, int right) 
{
        bool flag = true;
        for (int i = 31; i >= 0; i--) {
            if (flag == false) {
                left = left & ~(1 << i);
            }
            else if ((left & (1 << i)) != (right & (1 << i))) {
                flag = false;
            }
        }
        
        return left;
    }
void solve()
{
    // temp
}

int main()
{
    ll t;cin>>t;
    while(t--)
    {
        
    }
    return 0;
}
