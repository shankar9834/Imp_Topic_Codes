#include<bits/stdc++.h>
using namespace std;

int st[30];
 // int arr[6]={0, 2, 5, -1, 4, 3};
        //  0  1  2   3  4  5
int arr[]={0,1,2,5};

void buildTreeMinRange(int si,int ss,int se)
{
        if(ss==se)
        {
            st[si]=arr[ss];
            return ;
        }
         int mid=(ss+se)/2;
        buildTreeMinRange(2*si,ss,mid);
        buildTreeMinRange(2*si+1,mid+1,se);

        st[si]=min(st[2*si],st[2*si+1]);

}

int queryMinRange(int si,int ss,int se,int qs,int qe)
{
       if(se<qs||ss>qe)
       {
           return INT_MAX;
       }
       if(se<=qe&&ss>=qs)
       {
           return st[si];
       }

       int mid=(ss+se)/2;

      int l= queryMinRange(2*si,ss,mid,qs,qe);
       int r=queryMinRange(2*si+1,mid+1,se,qs,qe);
         return min(l,r);
     
}

/* void update(int si,int ss,int se,int qi)
{
      if(ss==se)
      {
          
      }
      
      int mid=(ss+se)/2;

}
 */

void buildTreeSumRange(int si,int ss,int se)
{
        if(ss==se)
        {
            st[si]=arr[ss];
            return ;
        }
         int mid=(ss+se)/2;
        buildTreeSumRange(2*si,ss,mid);
        buildTreeSumRange(2*si+1,mid+1,se);

        st[si]=st[2*si]+st[2*si+1];

}

int querySumRange(int si,int ss,int se,int qs,int qe)
{
       if(se<qs||ss>qe)
       {
           return 0;
       }
       if(ss==se)
         {
             return st[si];
         }

       if(se<=qe&&ss>=qs)
       {
           return st[si];
       }

       int mid=(ss+se)/2;

      int l= queryMinRange(2*si,ss,mid,qs,qe);
       int r=queryMinRange(2*si+1,mid+1,se,qs,qe);
         return l+r;
     
}

int main()
{
    
  buildTreeMinRange(1,1,3);
   /*    int val=queryMinRange(1,1,6,4,5);
    cout<<"min value in range 2 to 4 is "<<val<<endl;   */  

    // buildTreeSumRange(1,1,3);

    /* for(int i=1;i<=8;i++)
     {
        cout<<st[i]<<" ";
     }*/

}