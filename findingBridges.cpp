#include<bits/stdc++.h>
using namespace std;
vector<bool>vis;
vector<int>tin,low;
vector<vector<int>>adj;
int timer;


void isBridge(int a,int b)
{
      cout<<"bridge exit in "<<a<<" "<<b<<endl;
}

void dfs(int v,int p=-1)
{
    vis[v]=true;
    tin[v]=low[v]=timer++;

    for(auto to:adj[v])
    {
           if(to==p) continue;
           else if(vis[to])
           {
                 low[v]=min(low[v],tin[to]);
           }
           else{
                  dfs(to,v);
                  low[v]=min(low[v],low[to]);

                  if(low[to]>tin[v])
                  {
                      isBridge(v,to);
                  }
           }
    }

}


int main()
{

 int nodes,edges;
 cin>>nodes>>edges;
 int k=nodes;
 
 while(k--)
 {
     int x,y;
     cin>>x>>y;
     adj[x].push_back(y);
     adj[y].push_back(x);

 }   

 for(int i=0;i<nodes;i++)
 {    
     vis.assign(nodes,-1);
     tin.assign(nodes,-1);
     low.assign(nodes,-1);
     timer=0;
     
     if(!vis[i])dfs(i);
 
 }



}