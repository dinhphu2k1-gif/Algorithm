#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        // int ans = 0;
        // int len = 1;
        // int n = arr.size();
        // int mark = 0;
        // int tmp;

        // if (n < 2) return n;

        // for (int i = 0; i < n-1; i++) {
        //     if (arr[i] > arr[i+1]){
        //         tmp = 1;
        //         if(mark == tmp){
        //             ans = max(ans, len);
        //             len = 2;
        //         }
        //         else {
        //             len++;
        //             ans = max(ans, len);
        //         }
        //         mark = tmp;
        //     }
        //     else if (arr[i] < arr[i+1]){
        //         tmp = -1;
        //         if (mark == tmp){
        //             ans = max(ans, len);
        //             len = 2;
        //         }
        //         else {
        //             len++;
        //             ans = max(ans, len);
        //         }
        //         mark = tmp;
        //     }
        //     else {
        //         mark = 0;
        //         ans = max(ans, len);
        //         len = 1;
        //     }
        // }
        // return ans;
        int inc = 1, dec = 1, result = 1;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] < arr[i - 1]) {
                dec = inc + 1;
                inc = 1;
            } else if (arr[i] > arr[i - 1]) {
                inc = dec + 1;
                dec = 1;
            } else {
                inc = 1;
                dec = 1;
            }
            result = max(result, max(dec, inc));
        }
        return result;
    }
};

int main(){
    vector <int> arr = {9, 9};
    Solution test;
    cout << test.maxTurbulenceSize(arr) << endl;

    return 0;
}