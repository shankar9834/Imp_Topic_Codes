#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<vector<int>>all_permutations;
    vector<int>permutation;
    for(int i=1;i<=6;i++)
    {
        permutation.push_back(i);
    }

    do
    {
        all_permutations.push_back(permutation);

    } while (next_permutation(permutation.begin(),permutation.end()));
int ct=0;
for(auto &c:all_permutations)
{ct++;
    for(auto k:c)
    {
        cout<<k<<" ";
    }
    cout<<endl;
}

cout<<"total permutations are "<<ct<<endl;
    
}