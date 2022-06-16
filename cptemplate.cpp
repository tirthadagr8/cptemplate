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
void bfs(ll i,ll j,ll source,vector<vector<ll>> grid)
{
    queue<int> q;
    q.push(source);
    vis_1d[source]=true;
    while(!q.empty())
    {
        int cur_v=q.front();
        q.pop();
        for(int child:grid[cur_v])
        {
            if(!vis_1d[child])
            {
                q.push(child);
                vis_1d[child]=true;
            }
        }
    }
}
void dfs(ll i,ll j,ll vertex,vector<vector<ll>> grid,ll parent=0)
{
    // TAKE ACTION ON VERTEX AFTER ENTERING THE VERTEX
    for(int child:grid[vertex]) // rather TREE to be precise
    {
        // TAKE ACTION ON CHILD BEFORE ENTERING CHILD NODE
        if(child==parent)continue;
        dfs(0,0,child,grid,vertex);
        // TAKE ACTION AFTER EXITING CHILD NODE
    }
    // TAKE ACTION AFTER EXITING THE VERTEX
    
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
            dfs(i + 1, j,0, grid);
            dfs(i - 1, j,0, grid);
            dfs(i, j - 1,0, grid);
            dfs(i, j + 1,0, grid);
        }
}
ll commDiv(ll a, ll b)
{
	// find gcd of a, b
	ll n=__gcd(a,b);
	// Count divisors of n.
	ll count=0;
    loop(i,1,sqrt(n)+1)
    {
        if(n%i==0)
        {
            if(n/i==i)count++;
            else count+=2;
        }
    }
	return count;
}
void substring(string s) // Father of TLE
{
    for(int i=0;i<s.size();i++)
    {
        for(int j=i;j<=s.size()-i;j++)
        cout<<s.substr(i,j)<<endl;
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
    
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll t;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
