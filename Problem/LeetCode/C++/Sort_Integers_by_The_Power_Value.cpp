#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int getKth(int lo, int hi, int k) {
        vector <pair<int, int> > arr; 
        
        for (int i = lo; i <= hi; i++) {
            int count = 0;
            int num = i;
            while (num != 1){
                count++;
                if (num % 2 == 0){
                    num /= 2;
                }
                else {
                    num = num * 3 + 1;
                }
            }
            // cout << count << endl;
            arr.push_back({count, i});
        }

        sort(arr.begin(), arr.end());

        return arr[k-1].second;
    }
};

int main(){
    Solution solution;
    cout << solution.getKth(12, 15, 2) << endl;

    return 0;
}