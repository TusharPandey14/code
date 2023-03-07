#include<bits/stdc++.h>
using namespace std;
void PrintSequence(int idx,vector<int> &store,int arr[],int n){
    // base case
    if(idx==n){
        for(auto it: store){
            cout<<it<<" ";
        }
        if(store.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    // Take or pick the perticular index into the subsequence
    store.push_back(arr[idx]);
    PrintSequence(idx+1,store,arr,n);
    store.pop_back();
   // Not Pick Or Not Take condeition, this Element Is Not Added to our Subsequence
    PrintSequence(idx+1,store,arr,n);
}
int main()
{
    int arr[]={3,2,1};
    int n=3; // size
    vector<int>ds;
    PrintSequence(0,ds,arr,n);
    return 0;
}
                      /* FOR STRING */

// void fn(int ind, vector<char> &ds,char arr[], int n  ){
//     if (ind==n){
//         for (auto it:ds)
//             cout<<it <<" ";
//         cout<<endl;
//         return;
//     }
//     ds.push_back(arr[ind]);
//     fn (ind+1,ds , arr,n);
//     ds.pop_back();
//     fn(ind+1 , ds ,arr , n);
    
// }
// int main() {
//     int n = 4;
//     char arr[4] = {'a','b','c','d'};
//     vector <char> ds;
//     fn(0,ds , arr,n);
//     return 0;
// }