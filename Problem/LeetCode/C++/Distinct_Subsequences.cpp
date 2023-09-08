#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string s;
    string t;
    int count = 0;

    void generate(string str, int i, int len){
        if (len == t.length()){
            if (str == t){
                count++;
                // cout << str << " " << t << " " << i << endl;
            } 
            return ;
        }

        if (len + (s.length() - i) < t.length()) return ;
        for (int j = i; j < s.length(); j++){
            if (s[j] == t[len]) generate(str + s[j], j + 1, len + 1);
        }
    }

    int numDistinct(string s, string t) {
        this->s = s; this->t = t;
        generate("", 0, 0);
        return count;
    }
};

int main(){
    Solution solution;
    cout << solution.numDistinct("babgbag", "bag") << endl;

    return 0;
}