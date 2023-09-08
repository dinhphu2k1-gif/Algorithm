#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int ans;
        int min_distance = INT_MAX;
        int sum;

        sort(nums.begin(), nums.end());

        int L, R;
        for (int i = 0; i < n - 2 ; i++){
            if (i > 0){
                if (nums[i] == nums[i - 1]) continue;
            }
            L = i + 1;
            R = n - 1;
            while (L < R ){
                sum = nums[i] + nums[L] + nums[R] - target;
                if (abs(sum) < min_distance){
                    min_distance = abs(sum);
                    ans = sum + target;
                }
                if (sum < 0) L += 1;
                else if (sum > 0) R -= 1;
                else return ans;
            }
        }
        return ans;
    }
};

int main(){
    vector<int> nums = {-1,2,1,-4};
    Solution solution;
    cout << solution.threeSumClosest(nums, 1) << endl;

    return 0;
}