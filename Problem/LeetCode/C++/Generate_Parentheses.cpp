#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> res;
    void addParenthesis(string str, int m, int n, int mark){
        if (m == 2*n){
            // cout << mark << endl;
            if (mark == 0) res.push_back(str);
            return ;
        }
        
        if (mark == 0){
            addParenthesis(str + '(', m + 1, n, mark + 1);
        }
        else {
            addParenthesis(str + '(', m + 1, n, mark + 1);

            addParenthesis(str + ')', m + 1, n, mark - 1);
        }
    }

    vector<string> generateParenthesis(int n) {
        string str = ""; 
        addParenthesis(str, 0, n, 0);
        // cout << "ok" << endl;

        return res;
    }
};

int main(){
    Solution solution;
    int n;
    cin >> n; 

    vector<string> res = solution.generateParenthesis(n);

    for (int i = 0; i < res.size(); i++){
        cout << res[i] << endl;
    }


    return 0;
}