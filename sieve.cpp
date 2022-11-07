#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
void sieve(int n)
{
    int a[n]={0};
    for(int i=2;i<n;i++)
    {
        if(a[i]==0){
            for(int j=i*i;j<n;j+=i)
            {
                a[j]=1;
            }
        }
    }
    for(int i=2;i<n;i++)
{
    if(a[i]==0){cout<<i<<" ";}
}
}
int main()
{
ios_base::sync_with_stdio(false);
/* cin.tie(NULL);
cout.tie(NULL); */
int n;
cout<<"enter num\n";
cin>>n;
cout<<"print the prime numbers upto given num "<<n<<endl;
sieve(n);
return 0;
}