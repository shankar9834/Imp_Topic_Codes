#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=3;
    vector<vector<int>>subset;
    for(int i=0;i<(1<<n);i++)
    {vector<int>subst;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                subst.push_back(j);
            }
           
        }
         subset.push_back(subst);
    }


    for(auto &c:subset)
    {
        for(auto k:c)
        {
          cout<<k<<" ";
        }

      cout<<endl;
    }
    
}