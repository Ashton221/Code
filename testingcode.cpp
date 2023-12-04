#include <iostream>
using namespace std;
#include <vector>


int main(){

  vector<int> nums{1, 2, 1};
  vector<int> ans;
  ans = nums;


// Concatenates two nums arrays
  for( int i = 0; i < nums.size(); i++)
  {
    ans.push_back(nums[i]);
  }

//Displays ans Array
  for( int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << endl;
  }

  return 0;
}