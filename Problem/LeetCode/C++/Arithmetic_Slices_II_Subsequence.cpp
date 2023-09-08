#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();

        long long ans = 0;
        vector <map <long long, int>> dp(n);
        for (int i = 1; i < n; i++){
            for (int j = 0; j < i; j++){
                long long d = long(nums[i]) - long(nums[j]);
                int sum = 0;
                if (dp[i].find(d) != dp[j].end()){
                    sum = dp[j][d];
                }
                dp[i][d] += sum + 1;
                ans += sum;

            }
        }
        return ans;
    }
};

int main(){
    vector <int> nums = {2,4,6,8,10};
    Solution test;
    cout << test.numberOfArithmeticSlices(nums) << endl;

    return 0;
}