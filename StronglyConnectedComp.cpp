// kosarajus algorithm
// first create topological order using stack
// then transpose graph (reverse edges)
// then do dfs by picking top element from stack till stack is not empty to get strongly connected componants



#include <bits/stdc++.h>
#include <ctime>
#include <ratio>
#include <chrono>

using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define deb(x) cout << #x << '=' << x << endl;
#define debv(v) for(int i=0;i<(int)v.size();i++) cout<<v[i]<<" "; cout<<endl;
#define yes() cout << "YES" << endl;
#define no() cout << "NO" << endl;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long


void makeGraphD();
vector<int> adj[100005];
vector<int> adjT[100005];
int vis[100005];
//vector<int> divisors(int n);
int nodes, edges;

stack<int>st;

void tops(int n)
{
      vis[n]=1;

      for(auto child:adj[n])
      {
        if(!vis[child])
        {
            tops(child);
        }
      }

      st.push(n);
   
}

void transposeGraph()
{
      for(int i=0;i<nodes;i++)
      {
           for(auto el:adj[i])
           {
              adjT[el].push_back(i);
           }
      }
}

void dfs(int node)
{
     vis[node]=1;

     for(auto child:adjT[node])
     {
        if(!vis[child])
        {
            dfs(child);
        }
     }
}

void solve()
{
    for(int i=0;i<nodes;i++)
    {
        if(!vis[i])
        {
          tops(i);
        }
    }
        
        transposeGraph();   
       memset(vis,0,sizeof(vis));


       int scss=0;
        while(!st.empty())
        {
              int node=st.top();
              st.pop();
              if(!vis[node])
              {
                dfs(node);
                scss++;
              }
        }       

        cout<<scss<<endl;
}



int main()
{

    fastio();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

#ifndef ONLINE_JUDGE
    using namespace std::chrono;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
#endif

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
#ifndef ONLINE_JUDGE
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
    std::cout << "It took me " << time_span.count() << " seconds.";
    std::cout << std::endl;
#endif
    return 0;
}

void makeGraphD()
{
    cin >> nodes >> edges;
    int temp = edges;
    while (temp--)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
       // adj[y].push_back(x);
    }
}

int binary_expo(int a, int b)
{
    int result = 1;
    while (b > 0)
    {
        if (b % 2 != 0)
        {
            result = result * a;
        }
        a = a * a;
        b = b / 2;
    }
    return result;
}

bool isprime(int a)
{
    if (a < 2)
        return false;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

vector<int> divisors(int n)
{
    vector<int> div;
    while (n % 2 == 0)
    {
        div.push_back(2);
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            div.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
    {
        div.push_back(n);
    }
    return div;
}