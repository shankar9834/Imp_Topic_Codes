#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
int modulo_exp(int b,int m)
{
    if(m==0){return 1;}
  else if(m%2==0){return modulo_exp(b*b,m/2);}
  else{return b*modulo_exp(b*b,(m-1)/2);}
}
int fermat(int b,int m)
{
    return modulo_exp(b,m-2);

}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int a,b,m;
 
cout<<"enter a,b,m such that gcd(a,m)=1 "<<endl;
cin>>a>>b>>m;
cout<<"to calulate (a/b)%m ,the modular inverse of b under m is  b^-1 "<<fermat(b,m)<<endl;

return 0;
}