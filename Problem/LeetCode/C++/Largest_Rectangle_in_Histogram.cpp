#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size();
        vector<int> L, R;
        // tim can trai cua heights[i]
        for (int i = 0; i < n; i++)
        {
            int index = i - 1;
            while (index >= 0)
            {
                if (heights[index] >= heights[i])
                {
                    index--;
                }
                else
                    break;
            }
            L.push_back(index + 1);
            // cout << index + 1 << " ";
        }
        // cout << endl;

        // tim can phai cua heights[i]
        for (int i = 0; i < n; i++)
        {
            int index = i;
            while (index < n)
            {
                if (heights[index] >= heights[i])
                {
                    index++;
                }
                else
                    break;
            }
            R.push_back(index - 1);
            // cout << index - 1 << " ";
        }
        // cout << endl;
        //max area = heights[i] * (khoang cach 2 can trai va phai)
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            res = max(res, heights[i] * (R[i] - L[i] + 1));
        }
        return res;
    }
};

int main(){
    vector<int> heights = {2,1,2};
    Solution solution;
    cout << solution.largestRectangleArea(heights) << endl;
    return 0;
}