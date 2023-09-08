#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for (char c : s){
            if (isalpha(c) || isdigit(c)){
                str += tolower(c);
            }
        }
        bool res = true;
        int n = str.length();

        for (int i = 0; i < n/2; i++){
            if (str[i] != str[n-i-1]){
                res = false;
                break;
            }
        }
        return res;
    }
};

int main(){
    Solution test;
    cout << test.isPalindrome("A man, a plan, a canal: Panama");

    return 0;
}