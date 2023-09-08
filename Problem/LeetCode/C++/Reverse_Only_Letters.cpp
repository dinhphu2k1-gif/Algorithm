#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {
        if (s.empty()) return s;
        int L = 0, R = s.length() - 1;
        char tmp;
        while (L < R) {
            while (!isalpha(s[L]) && L < R ) L++;
            while (!isalpha(s[R]) && R > L ) R--;
            // cout << L << " " << R << endl;

            tmp = s[R];
            s[R] = s[L];
            s[L] = tmp;

            L++; 
            R--;
        }

        return s;
    }
};

int main(){
    Solution solution;
    cout << solution.reverseOnlyLetters("7_28]")  << endl;

    return 0;
}