#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
 set<int> s;

   for (int i = 0; i < nums.size(); i++) {
      if (s.find(nums[i]) != s.end()) {
            return true;
        }
        s.insert(nums[i]);
    }
   return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 1};

   if (containsDuplicate(nums))
        cout << "true";
   else
        cout << "false";

   return 0;
}