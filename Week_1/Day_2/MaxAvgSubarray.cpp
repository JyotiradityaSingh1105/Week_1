#include <iostream>
#include <vector>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
   long long sum = 0;
    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }

    long long maxSum = sum;
    for (int i = k; i < nums.size(); i++) {
        sum = sum + nums[i] - nums[i - k];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }
 return (double)maxSum / k;
}

int main() {
  vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;

    cout << findMaxAverage(nums, k);
   return 0;
}