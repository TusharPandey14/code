#include<bits/stdc++.h>
    /*
    
Approach: We have given the nums array, so we will declare 
 an ans vector of vector that will store all the permutations also declare a data structure.
Declare a map and initialize it to zero and call the recursive function
Base condition:
When the data structure’s size is equal to n(size of nums array)  
then it is a permutation and stores that permutation in our ans, then returns it.
Recursion:
Run a for loop starting from 0 to nums.size() – 1. Check if the frequency of i is unmarked, 
if it is unmarked then it means it 
has not been picked and then we pick. And make sure it is marked as picked.
Call the recursion with the parameters to pick the other elements
 when we come back from the recursion make sure you throw that element out.
  And unmark that element in the map.  

Time Complexity:  N! x N

Space Complexity:  O(N)
   
    */

using namespace std;
class Solution {
  private:
    void recurPermute(vector < int > & ds, vector < int > & nums, vector < vector < int >> & ans, int freq[]) {
      if (ds.size() == nums.size()) {
        ans.push_back(ds);
        return;
      }
      for (int i = 0; i < nums.size(); i++) {
        if (!freq[i]) {
          ds.push_back(nums[i]);
          freq[i] = 1;
          recurPermute(ds, nums, ans, freq);
          freq[i] = 0;
          ds.pop_back();
        }
      }
    }
  public:
    vector < vector < int >> permute(vector < int > & nums) {
      vector < vector < int >> ans;
      vector < int > ds;
      int freq[nums.size()];
      for (int i = 0; i < nums.size(); i++) freq[i] = 0;
      recurPermute(ds, nums, ans, freq);
      return ans;
    }
};

int main() {
  Solution obj;
  vector<int> v{1,2,3};
  vector < vector < int >> sum = obj.permute(v);
  cout << "All Permutations are " << endl;
  for (int i = 0; i < sum.size(); i++) {
    for (int j = 0; j < sum[i].size(); j++)
      cout << sum[i][j] << " ";
    cout << endl;
  }
}