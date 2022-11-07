#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
int visited[10001];
vector<int>adj_ls[10001];
void dfs(int n)
{
    visited[n]=1;
    for(int i=0;i<adj_ls[n].size();i++)
    {int child=adj_ls[n][i];
        if(!visited[child])
        {
            dfs(child);
        }
    }
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int node,edge;
cin>>node>>edge;int count=0;
while(edge--)
{
    int node1,node2;
    cin>>node1>>node2;
    adj_ls[node1].push_back(node2);
    adj_ls[node2].push_back(node1);

}
for(int i=1;i<=node;i++)
{
    if(!visited[i]){
dfs(i);count++;
    }

}
cout<<"No of connected componants are "<<count<<endl;
return 0;
}