#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = s.length();
        int X = 0;
        for (int i = n-1; i >= 0; --i) {
            X = (X + shifts[i]) % 26;
            s[i] = (s[i] - 'a' + X) % 26 + 'a';
        }
        return s;
    }
};

int main(){
    Solution test;
    vector <int> shifts = {10, 20, 30};
    cout << test.shiftingLetters("bad", shifts);
}