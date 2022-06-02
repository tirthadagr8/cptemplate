#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi M_PI
#define Size_N  int(1e3+10)
using namespace std;

/* -- graph -- */
bool vis_1d;
bool vis_2d[Size_N][Size_N];
//vector<ll> graph_1d[Size_N];
//vector<vector<ll>> graph_2d[Size_N][Size_N];
//void graphinput()

void dfs(ll i,ll j,vector<vector<ll>> grid)
{
    /* 1 way to go each cell */
    
    // vis[vertex]=true;
    // for(int child:g[vertex])
    // {
    //     if(vis[child])
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
