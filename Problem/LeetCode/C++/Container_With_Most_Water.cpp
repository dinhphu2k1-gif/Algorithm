#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();  
        int max_area = 0;

        int L = 0, R = n-1;
        while(L != R){
            max_area = max(min(height[L], height[R]) * (R - L), max_area);
            if (height[L] < height[R]){
                L++;
            }
            else {
                R--;
            }
        }
        return max_area;
    }
};

int main(){
    Solution solution;
    vector <int> height = {1,8,6,2,5,4,8,3,7};
    cout << solution.maxArea(height) << endl;

    return 0;
}