#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map <char, int> arr;
        for (int i = 0; i < text.length(); i++) {
            arr[text[i]] += 1;
        }
        string str = "balloon";
        int res = 1000000;
        for (char c : str){
            if (c == 'l' || c == 'o'){
                res = min(res, arr[c] / 2);
            }
            else res = min(res, arr[c]);
        }
        return res;
    }
};

int main(){
    Solution test;
    cout << test.maxNumberOfBalloons("loonbalxballpoon");

    return 0;
}