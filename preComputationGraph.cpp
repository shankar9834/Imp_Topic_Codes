#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100000];
int vis[100000];
int evn[100000];
int sum[100000];
void dfs(int vertex,int par)
{
    vis[vertex]=1;
    if(vertex%2==0) evn[vertex]++;
    sum[vertex]+=vertex;
    for(auto child:adj[vertex])
    {
        
        if(child==par) continue;
        else{
            dfs(child,vertex);
            sum[vertex]+=sum[child];
            evn[vertex]+=evn[child];
        }
    }
}


int main()
{
     #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
      #endif
    int node,edge;
    cin>>node>>edge;
     
     
    while(edge--)
    {
          int x,y;
          cin>>x>>y;
          adj[x].push_back(y);
          adj[y].push_back(x);

    }

    for(int i=1;i<=node;++i)
    {
        if(vis[i]) continue;
          dfs(i,0);
    }
    for(int i=1;i<=node;++i)
    {
        cout<<i<<" "<<" sum "<<sum[i]<<" evn "<<evn[i]<<endl;
    }
}