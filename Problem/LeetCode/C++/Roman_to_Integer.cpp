#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        map <char, int> T ={{ 'I' , 1 },
                            { 'V' , 5 },
                            { 'X' , 10 },
                            { 'L' , 50 },
                            { 'C' , 100 },
                            { 'D' , 500 },
                            { 'M' , 1000 }};
        int res = 0;
        int i = 0;
        char a, b;

        while (i < n) {
            a = s[i];
            b = s[i+1];
            if (T[a] < T[b]) {
                res += T[b] - T[a];
                i += 2; 
            }
            else {
                res += T[a];
                i++;
            }

        }
        return  res;
    }
};

int main(){
    Solution solution;
    cout << solution.romanToInt("IX") << endl;

    return 0;
}