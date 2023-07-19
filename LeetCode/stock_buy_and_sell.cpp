/*    BRUTE FORCE
using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
  // Shows max Profit when Buying and Selling a Stock 
 int maxProfit(vector<int>&arr){ 
    int maxPro = 0;
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            if(arr[j]>arr[i]){
                maxPro=max(arr[j]-arr[i],maxPro);
            }

        }
    }
    return maxPro;
}

  int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 

    vector<int> arr = {7,1,5,3,6,4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;

    return 0;
}

*/

//............................................
// APPROACH 2 : BETTER 
// ...........................................
using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
  // Shows max Profit when Buying and Selling a Stock 
 int maxProfit(vector<int>&arr){ 
    int maxPro = 0;
    int minPrice=INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        minPrice = min(minPrice, arr[i]);
        maxPro = max(maxPro, arr[i] - minPrice);
    }
    return maxPro;
}

  int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 

    vector<int> arr = {7,1,5,3,6,4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;

    return 0;
}
// ***********************************************
// $$$.... QUESTION OF BUY AND SELL .....$$$$$$$$$

/*  void stockBuySell(int price[], int n) {
        // code here
        int ans=false; 
        for(int i=0;i<n;i++){
            int buy,sell=i;
            while(i<n-1 && price[i]>=price[i+1])
            i++;
            buy=i;
            while(i<n-1 && price[i]<=price[i+1])
            i++;
            sell=i;
            if(sell-buy>0){
                cout<<"("<<buy<<" "<<sell<<")"<<" ";
                ans=true;
            }
        }
        if(ans==false)
       cout<<"No Profit";
       cout<<endl;
    }
    */
    // ......................................