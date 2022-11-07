#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
int binary_exp(int x,int n)
{if(n==0){return 1;}
else if(n%2==0){return binary_exp(x*x,n/2);}
else{return x*binary_exp(x*x,(n-1)/2);}

}
int main()
{
ios_base::sync_with_stdio(false);
/* cin.tie(NULL);
cout.tie(NULL); */
cout<<"calaulate x^n using binary_expo "<<endl;
int x,n;
cout<<"enter x= \n";
cin>>x;
cout<<"enter n= \n";
cin>>n;
cout<<"the value of x^n is "<<binary_exp(x,n)<<endl;


return 0;
}