#include<bits/stdc++.h>
/*
    We have given the nums array, so we will 
    declare an ans vector of vector that will store all the permutations.

Call a recursive function that starts with zero, nums array, and ans vector.
Declare a map and initialize it to zero and call the recursive function
Base condition:
Whenever the index reaches the end take 
the nums array and put it in ans vector and return.
Recursion:
Go from index to n – 1 and swap. 
Once the swap has been done call recursion for the next state.
After coming back from the recursion make sure you re-swap it 
because for the next element the swap will not take place.

Time Complexity: O(N! X N)
Space Complexity: O(1)
*/
using namespace std;
class Solution {
  private:
    void recurPermute(int index, vector < int > & nums, vector < vector < int >> & ans) {
      if (index == nums.size()) {
        ans.push_back(nums);
        return;
      }
      for (int i = index; i < nums.size(); i++) {
        swap(nums[index], nums[i]);
        recurPermute(index + 1, nums, ans);
        swap(nums[index], nums[i]);
      }
    }
  public:
    vector < vector < int >> permute(vector < int > & nums) {
      vector < vector < int >> ans;
      recurPermute(0, nums, ans);
      return ans;
    }
};

int main() {
  Solution obj;
  vector < int > v {1,2,3};
  vector < vector < int >> sum = obj.permute(v);
  cout << "All Permutations are" << endl;
  for (int i = 0; i < sum.size(); i++) {
    for (int j = 0; j < sum[i].size(); j++)
      cout << sum[i][j] << " ";
    cout << endl;
  }
}