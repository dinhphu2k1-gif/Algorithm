#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector <string> result;
    string num;
    int target;

    void backTracking(int i, string str, long resCurrent, long numPrev){
        if (i == num.length()){
            if (resCurrent == target) result.push_back(str);
            return ;
        }
        // cout << i  <<  " ";
        string tmp;
        long n = 0;
        for (int j = i; j < num.length(); j++){
            if (j > i && num[i] == '0') break;
            tmp += num[j];
            // cout << tmp << " ";
            n = n * 10 + num[j] - '0';
            // cout << n << endl;
            if (i == 0){
                backTracking(j + 1, str + tmp, n, n);
            }
            else {
                backTracking(j + 1, str + '+' + tmp, resCurrent + n, n);
                backTracking(j + 1, str + '-' + tmp, resCurrent - n, -n);
                backTracking(j + 1, str + '*' + tmp, resCurrent - numPrev + numPrev * n, numPrev * n);
            }
        }
    }

    vector<string> addOperators(string num, int target) {
        this->num = num;
        this->target = target;

        backTracking(0, "", 0, 0);
        return result;
    }
};

int main(){
    Solution solution;
    
    vector <string> result = solution.addOperators("3456237490", 9191);
    for (int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }
    cout << "ok";
    return 0;
}