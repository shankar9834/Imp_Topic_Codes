#include<bits/stdc++.h>
using namespace std;

class compare{
  public:
     bool operator()(pair<int,string> const& p1, pair<int,string> const& p2)
    {
      
        if(p1.first==p2.first){
            return p1.second>p2.second;
        }
        return p1.first<p2.first;
    }

};

int main()
{
        priority_queue<pair<int,string>,vector<pair<int,string>>,compare>pq;


        pq.push({3,"shan"});
        pq.push({3,"shnk"});
        pq.push({2,"kar"});
        while(!pq.empty())
        {
          cout<<pq.top().first<<" "<<pq.top().second<<endl;
          pq.pop();
        }
}