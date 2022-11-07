/*********
https://www.geeksforgeeks.org/difference-array-range-update-query-o1/
**********/
//link to the question
#include<bits/stdc++.h>
using namespace std;
int main()
{int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int diff[n];diff[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        diff[i]=arr[i]-arr[i-1];
    }
    int query;
    cin>>query;
    while(query--)
    {
        int left_ind,right_ind,update_value;
        cin>>left_ind>>right_ind>>update_value;
        diff[left_ind]+=update_value;
        diff[right_ind+1]-=update_value;
    }
    cout<<"printing updated array\n";
    arr[0]=diff[0];
for(int i=1;i<n;i++)
{
arr[i]=arr[i-1]+diff[i];
cout<<arr[i]<<" ";



}
}