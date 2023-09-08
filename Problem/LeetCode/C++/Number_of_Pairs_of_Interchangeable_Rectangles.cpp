#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        int n = rectangles.size();
        map <double, long long> ratios;
        map <double, long long> times;
        for (auto &rectangles : rectangles){
            double ratio = rectangles[0] * 1.0 / rectangles[1];
            ratios[ratio]++;
            if (ratios[ratio] >= 2){
                times[ratio] += ratios[ratio] - 1;
            }
        }
        long long res = 0;

        map<double, long long>::iterator it;
        for (it = times.begin(); it != times.end(); it++){
            res += it->second;
        }

        return res;
    }
};

int main(){
    Solution test;
    vector<vector<int>> rectangles = {{4,8},{3,6},{10,20},{15,30}};

    cout << test.interchangeableRectangles(rectangles) << endl;

    return 0;
}