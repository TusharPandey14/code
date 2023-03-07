#include<bits/stdc++.h>
using namespace std;
 /* PROGRAM TO PRINT SEQUENCE WHOSE SUM IS K */
 
void PrintSequence(int idx,vector<int> &ds,int s, int sum,int arr[],int n){
    // base case
    if(idx==n){
        if(s==sum){
            for(auto it: ds) cout<<it<<" ";
            cout<<endl;
        }
        return;
        
    }
    // Take or pick the perticular index into the subsequence
    ds.push_back(arr[idx]);
    s+=arr[idx];
    PrintSequence(idx+1,ds,s,sum,arr,n);
    s-=arr[idx];
    ds.pop_back();
   // Not Pick Or Not Take condeition, this Element Is Not Added to our Subsequence
    PrintSequence(idx+1,ds,s,sum,arr,n);
}
int main()
{
    int arr[]={1,2,1};
    int n=3; // size
    int sum=2;
    vector<int>ds;
    PrintSequence(0,ds,0,sum,arr,n);
                     //^initial sum 
    return 0;
}