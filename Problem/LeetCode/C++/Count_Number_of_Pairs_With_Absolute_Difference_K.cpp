#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        // if (!nums.size()) return 0;
        // int max_int = 0;
        // map <int, int> arr;
        // for (int i : nums){
        //     arr[i] += 1;
        //     max_int = max(max_int, i);
        // }

        // int ans = 0;
        // // int tmp;
        // map <int, int>::iterator i;
        // for (i = arr.begin(); i != arr.end(); i++) {
        //     int a = i->first;
        //     int b = a + k;
        //     if (b > max_int) break;
        //     if (arr[b] != 0){
        //         // cout << arr[b] << " " << arr[a] << endl;
        //         ans += arr[b] * arr[a];
        //     }
        // }

        // return ans;
        vector<int> freq(101, 0);
        for(int x : nums) {
            freq[x]++;
        }
        int ans = 0;
        for(int i = k + 1; i <= 100; i++) {
            ans += freq[i] * freq[i - k];
        }
        
        return ans;
    }
};

int main(){
    vector<int> nums = {1,2,2,1};
    Solution test;
    cout << test.countKDifference(nums, 1);

    return 0;
}