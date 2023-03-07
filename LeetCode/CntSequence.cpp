#include<bits/stdc++.h>
using namespace std;
 /* PROGRAM TO PRINT TOTAL NO OF SEQUENCE WHOSE SUM IS K */
 
int PrintSequence(int idx,int s, int sum,int arr[],int n){
    // base case
    if(idx==n){
        if(s==sum)
           return 1;
        else return 0;
        
    }
    // Take or pick the perticular index into the subsequence
    
    s+=arr[idx];

    int left=PrintSequence(idx+1,s,sum,arr,n);

    s-=arr[idx];
   // Not Pick Or Not Take condeition, this Element Is Not Added to our Subsequence
    int right =PrintSequence(idx+1,s,sum,arr,n);

    return left+right;
}
int main()
{
    int arr[]={1,2,1};
    int n=3; // size
    int sum=2;
   cout<< PrintSequence(0,0,sum,arr,n)<<endl;
                        //^initial sum 
    return 0;
}