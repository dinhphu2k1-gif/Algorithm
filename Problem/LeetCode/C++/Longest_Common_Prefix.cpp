#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";

        sort(strs.begin(), strs.end());
        string a = strs[0];
        string b = strs[strs.size() - 1];

        for (int i = 0; i < a.length(); i++) {
            if (a[i] == b[i]) {
                result += a[i];
            }
            else {
                break;
            }
        }
        
        return result;
    }
};

int main(){
    vector <string> strs = {"flower","flow","flight"};
    Solution test;
    cout << test.longestCommonPrefix(strs) << endl;

    return 0;
}