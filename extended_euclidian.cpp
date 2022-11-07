#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
int x,y,d;
void egcd(int a,int b)
{
    if(b==0){d=a;
        x=1;
    y=0;
    
    }
    
     else{egcd(b,a%b);
    int temp=x;
    x=y;
    y=temp-y*(a/b);}

}
 

int main()
{
ios_base::sync_with_stdio(false);
/* cin.tie(NULL);
cout.tie(NULL); */
cout<<"enter a and b and ";cout<<"find x and y in eqN ax+by=gcd(a,b)\n";
int a,b;
cin>>a>>b;
egcd(a,b);
cout<<"x = "<<x<<" is coeficient of a and the coef of b is "<<"y = "<<y<<endl;

return 0;
}