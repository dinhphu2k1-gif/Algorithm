#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        int n = s.length();
        vector <string> arr(numRows);

        int row = 0, step = 1;
        for (char c : s){
            arr[row] += c;
            if (row == 0) step = 1;
            else if (row == numRows - 1) step = -1;

            row += step;
        }
        string ans = "";
        for (int i = 0; i < numRows; i++){
            ans += arr[i];
        }

        return ans;
    }
};

int main(){
    Solution solution;
    cout << solution.convert("PAYPALISHIRING", 3) << endl;

    return 0;
}