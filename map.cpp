 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
 map<int,int>m;
 pair<int,int>p;
 p={2,3};
 m.insert(p);
 map<int,int>::iterator it;
 it=m.begin();
 cout<<it->first<<" "<<it->second<<endl;
 cout<<(*it).first<<" "<<(*it).second<<" ";
 return 0;
 }