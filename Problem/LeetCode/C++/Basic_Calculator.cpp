#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    long calculate(string s) {
        long res = 0;
        vector <int> signs(2,1);


        for (int i = 0; i < s.length(); i++){
            char c = s[i];
            if (c == ' '){
                continue;
            }
            else if (c >= '0'){
                long num = 0;
                while (i < s.length() && isdigit(s[i])){
                    num = num * 10 + s[i] - '0';
                    i++;
                }
                // cout << res << endl;
                res  += num * signs.back();
                signs.pop_back();
                i--;
            }
            else if (c == ')'){
                signs.pop_back();
            }
            else {
                signs.push_back(signs.back() * (c == '-'? -1 : 1));
            }
        }
        return res;
    }
};

int main(){
    Solution solution;
    cout << solution.calculate("(7)-(0)+(4)");

    return 0;
}