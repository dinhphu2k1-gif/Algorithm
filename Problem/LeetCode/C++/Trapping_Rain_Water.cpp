#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size()-1, level = 0, water = 0;
        while (l < r) {
            int lower = height[height[l] < height[r] ? l++ : r--];
            level = max(level, lower);
            water += level - lower;

            cout << level << " " << lower << endl;
        }
        return water;
    }
};

int main(){
    vector <int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    Solution solution;
    cout << solution.trap(height) << endl;
}