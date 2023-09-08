#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack <char> S;
        char tmp;
        for (char c : s){
            if (c == '(' || c == '{' || c == '['){
                S.push(c);
                continue;
            }

            if (S.empty()){
                return false; 
            }
            
            if (c == ')'){
                tmp = S.top();
                // cout << tmp << endl;
                if (tmp != '(' || S.empty()) return false;
                S.pop();
            }
            else if (c == '}'){
                tmp = S.top();
                if (tmp != '{' || S.empty()) return false;
                S.pop();
            }
            else {
                tmp = S.top();
                if (tmp != '[' || S.empty()) return false;
                S.pop();
            }
        }
        if (!S.empty()) return false;
        return true;
    }
};

int main(){
    Solution test;
    cout << test.isValid("()") << endl;

    return 0;
}