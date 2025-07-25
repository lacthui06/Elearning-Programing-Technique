#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
class Solution
{
public:
   int search(vector<int> &nums, int target)
   {
      int left = 0, right = nums.size() - 1;
      while (left <= right)
      {
         int mid = left + (right - left)/ 2;
         if (target == nums[mid]) 
         {
            return mid;
            nums.erase(nums.begin() + mid);
         }
         else if (target > nums[mid]) left = mid + 1;
         else right = mid - 1; 
      }
      return -1;
   }
};
int main()
{
   vector <int> nums = { -1, 0, 3, 5, 9, 12 };
   int target = 9;
   Solution s;
   int outp = s.search(nums, target);
   if (outp != -1) cout<<outp;
   else cout<<"invalid";
}