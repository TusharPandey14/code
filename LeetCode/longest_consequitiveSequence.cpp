

#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> nums) {
        set<int>s;
        for(auto it: nums){
            s.insert(it);
        }
        int curr=1,ans=1;
        int prev=*s.begin();
         for (auto it = next(s.begin()); it != s.end(); ++it){
            if(*it==prev+1){
                curr++;
            }
            else if(*it!=prev){
                curr=1;
            }
            prev=*it;
            ans=max(ans,curr);
        }
        return ans;
    }
    int main()
    {
        vector<int> arr{1,5,6,7,16,17,18,19,8,9};
        int lon=longestConsecutive(arr);
       cout<<"The longest consecutive sequence is "<<lon<<endl;
        
    }