#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector <int> result;
        int max_int = 0;
        map <int, int> arr;
        for (int i : changed) {
            arr[i] += 1;
            max_int = max(max_int, i);
        }

        map <int, int>::iterator i;
        int tmp;
        int a, b;
        for (i = arr.begin(); i != arr.end(); i++){
            a = i->first;
            b = a * 2;
            // cout << a << " " << b << endl;
            if (b > max_int) break;
            tmp = min(arr[a], arr[b]);
            if (a == b) tmp /= 2;
            if (tmp != 0){
                arr[a] -= tmp;
                arr[b] -= tmp;
                while (tmp != 0) {
                    result.push_back(a);
                    // cout << a << endl;
                    tmp--;
                }
            }
        }

        for (i = arr.begin(); i != arr.end(); i++) {
            if (i->second != 0) return {};
        }

        return result;
    }
};

int main(){
    Solution test;
    vector<int> nums = {0, 0, 0, 0};

    vector<int> result = test.findOriginalArray(nums);
    cout << "ok" << endl;
    for (int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }
    cout << "ok" << endl;

    return 0;
}