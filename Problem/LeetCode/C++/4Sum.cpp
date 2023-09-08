#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        if (n < 4) return {};

        int L1, L2, R1, R2;
        vector<vector<int>> result;
        long long sum, sum1, sum2;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n-2; i++) {
            for (int j = n-1; j > i+2; j--) {
                L1 = i, R1 = j;
                sum1 = nums[L1] + nums[R1];

                L2 = L1 + 1; 
                R2 = R1 - 1;
                while (L2 < R2){
                    sum2 = nums[L2] + nums[R2];
                    sum = sum1 + sum2;
                    if (sum < target) L2++;
                    else if (sum > target) R2--;
                    else {
                        vector<int> tmp = {nums[L1], nums[L2], nums[R2], nums[R1]};
                        result.push_back(tmp);
                        L2++; 
                        R2--;
                    }
                }
            }
            
        }
        set<vector<int>> s(result.begin(), result.end());
        result.assign(s.begin(), s.end());
        return result;
    }
};

int main(){
    Solution solution;
    vector <int> nums = {-1,2,2,-5,0,-1,4};
    vector<vector<int>> result = solution.fourSum(nums, 3);
    for (int i = 0; i < result.size(); i++){
        for (int j = 0; j < result[i].size(); j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}