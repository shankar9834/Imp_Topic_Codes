#include<bits/stdc++.h>
using namespace std;


int main()
{

   /*
     auto sum=[&](int a,int b)
    {
        return a+b;
    };

    cout<<"sum is : "<<sum(5,6)<<endl;
    
     */
    string s="rock is hard to cut";
  //method 1 to initialise
   // stringstream ss(s);


// method 2 to initialise
     stringstream ss2;
    ss2<<s;

   string buff;
     s="";
   while(ss2>>buff)
   {
       cout<<buff<<endl;
       s+=buff;
   }
   cout<<s<<endl;  

   //prints the string given to stringstream object
//   cout<<ss.str()<<endl;
   

}