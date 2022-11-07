/*
max sum from left most point (1,1) to rightmost point (n,n)
can move in right and down
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{

int n;
cin>>n;
int val[n+1][n+1];
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        cin>>val[i][j];
    }
}
for(int i=0;i<=n;i++)
{
    for(int j=0;j<=n;j++)
    {
        if(i==0||j==0)
            val[i][j]=0;
        
    }
}
int sum[n+1][n+1];
for(int i=0;i<=n;i++)
{
    for(int j=0;j<=n;j++)
    {
        
            sum[i][j]=0;
        
    }
}
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
          sum[i][j]=max(sum[i][j-1],sum[i-1][j])+val[i][j];
      
    }
}
cout<<"ans is: "<< sum[n][n]<<endl;
}