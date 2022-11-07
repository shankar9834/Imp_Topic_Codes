#include<bits/stdc++.h>
using namespace std;
int isprime[100000];
vector<int>lowestPrime(100000,0),highestPrime(100000,0);
void sieve(int n)
{
  memset(isprime,1,sizeof(isprime));
  isprime[2]=1;
  for(int i=2;i<=n;i++)
  {
    if(isprime[i])
    {
      lowestPrime[i]=highestPrime[i]=i;   //-------for prime nums(comment for this line only)
      for(int j=2*i;j<=n;j+=i)           //in for loop use 2*i while calculating lowest and highest prime
       {                                 //use i*i for only knowing prime or not 
        isprime[j]=0;                    // you can use one of them for knowing only prime or not ,but the second one is faster 
        highestPrime[j]=i;
        if(lowestPrime[j]==0)
        {
          lowestPrime[j]=i;
        }
      }
    }
  }

}

int main()
{

sieve(1000);
for(int i=2;i<=100;i++)
{
  cout<<i<<"  "<<"lp : "<<lowestPrime[i]<<"  |  "<<"hp : "<<highestPrime[i]<<endl;
}

int num;
cin>>num;
vector<int>primes;
map<int,int>priFreq;
 while(num>1)
{
  int primefact=lowestPrime[num];
  while(num%primefact==0)
  {
    priFreq[primefact]++;
     primes.push_back(primefact);
     num=num/primefact;
     

  }
 
} 


/* while(num>1)
{
  primes.push_back(lowestPrime[num]);
  num/=lowestPrime[num];
}
 */

for(auto k:primes)
{
  cout<<k<<" ";
}
cout<<endl;
for(auto m: priFreq)
{
  cout<<m.first<<" "<<m.second<<endl;
}
cout<<endl;
}