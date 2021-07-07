#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    
     int n;
    
     cout <<"enter size of array"<<endl;
     cin>>n;
      int i=0,j=n-1;
     int*A;
     A= new int[n];
     
      for(i=0;i<n;i++)
      {
          cin>> A[i];
      }
       sort(A, A+n);
       
       cout<<"elements after sorting"<<endl;
      for(i=0;i<n;i++)
      {
          cout<< A[i]<<endl;
      }
      
      int k, count=0,sum=0;
      cout <<"enter the sum required"<< endl;
      cin>> k;
       
      
         
         while(i<j)
         {

              if (  A[i]+ A[j]==k)
              {
                  cout<<A[i]<<A[j];
              }
              else if (  A[i]+ A[j]<k)
              {
                  i++;
              }
              else if (A[i]+ A[j] > k  )
              {
                  j--;
              }
              else
              {
                  cout<<"i m fed up of this"<<endl;
              }
         
}    
             
          
          
          
          
      
          
          
          
          
          
          
          
          
          
          return 1;
}