#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>v;
for(int i=0;i<5;i++)
{
    int x;
    cin>>x;
    v.push_back(x);
}
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<"\n";
return 0;
}