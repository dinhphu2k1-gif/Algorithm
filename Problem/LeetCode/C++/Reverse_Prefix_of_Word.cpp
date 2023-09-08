#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int count = 0;
        string sub = "";
        int mark = 0;
        for (int i = 0; i < word.length(); i++) {
            if (word[i] != ch){
                sub = word[i] + sub;
                count++;
            }
            if (word[i] == ch){
                mark = 1;
                break;
            }
        }

        if (mark == 0) return word;
        sub = ch + sub;
        count++;

        for (int i = 0; i < count; i++){
            word[i] = sub[i];
        }

        return word;
    }
};

int main(){
    Solution test; 
    cout << test.reversePrefix("abcd", 'z');

    return 0;
}