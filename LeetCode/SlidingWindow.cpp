using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 void subArrWithSumKOptimal(int arr[],int n , int k){ 
    int start=0, end=-1,sum=0;
    while(start<n){
        while((end+1<n)&& (sum+arr[end+1]<=k)){
            sum+=arr[++end];

        }
        if(sum==k){
            for (int p = start; p <= end; p++)
        cout << arr[p] << " ";
      cout << "\n";
        }
        sum -= arr[start];
    start++;
    }
}

  int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 

    int arr[]={1,9,3,7};
    int n=sizeof(arr)/sizeof(arr[0]),k=10;
    cout<<"Subarray With Given Sum is "<<endl;

    subArrWithSumKOptimal(arr, n, k);

    return 0;
}