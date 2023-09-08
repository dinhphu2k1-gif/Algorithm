#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> res;
        int n1 = nums1.size(), n2 = nums2.size();
        int i = 0, j = 0;
        int a, b;
        while (i < n1 && j < n2)
        {
            a = nums1[i];
            b = nums2[j];
            if (a > b)
            {
                j++;
            }
            else if (a < b)
            {
                i++;
            }
            else
            {
                res.push_back(a);
                i++;
                j++;
            }
        }

        return res;
    }
};

int main()
{
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    Solution test;
    vector<int> res = test.intersect(nums1, nums2);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }

    return 0;
}