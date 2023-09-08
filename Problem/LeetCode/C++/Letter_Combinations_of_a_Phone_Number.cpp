#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.length() == 0) return {};
        string characters[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector <string> ans;
        ans.push_back("");
        // cout << 1 << endl;
        for (char c : digits) {
            int digit = c - '0';
            vector <string> tmp;
            for (char c : characters[digit]) {
                for (auto &x: ans){
                    // cout << x + c << endl;
                    tmp.push_back(x + c);
                }
            }
            ans.swap(tmp);
        }
        
        return ans;
    }
};

int main(){
    Solution solution;
    vector <string> ans = solution.letterCombinations("23");
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    return 0;
}