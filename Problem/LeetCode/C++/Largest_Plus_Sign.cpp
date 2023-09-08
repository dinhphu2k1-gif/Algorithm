#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
        // int arr[n][n];
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n; j++) {
        //         arr[i][j] = 1;
        //     }
        // }
        
        // for (auto &mine: mines){
        //     arr[mine[0]][mine[1]] = 0;
        // }

        // int res = 0;
        // int x = n%2 == 0 ? n/2 : n/2 + 1;
        // for (int i = 1; i < x; i++ ){
        //     for (int j = i; j < n-i; j++){
        //         if (arr[i][j] != 0){
        //             arr[i][j] = 1 + min(min(arr[i-1][j], arr[i][j-1]), min(arr[i+1][j], arr[i][j+1]));
        //         }
        //         if (arr[n-i-1][j] != 0){
        //             arr[n-i-1][j] = 1 + min(min(arr[n-i-2][j], arr[n-i-1][j-1]), min(arr[n-i][j], arr[n-i-1][j+1]));
        //         }
        //     }

        //     for (int j = i+1; j < n-i-1; j++){
        //         if (arr[j][i] != 0){
        //             arr[j][i] = 1 + min(min(arr[j-1][i], arr[j][i-1]), min(arr[j+1][i], arr[j][i+1]));
        //         }
        //         if (arr[j][n-i] != 0){
        //             arr[j][n-i] = 1 + min(min(arr[j-1][n-i], arr[j][n-i-1]), min(arr[j+1][n-i], arr[j][n-i+1]));
        //         }
        //     }
        // }
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n; j++) {
        //         res = max(res, arr[i][j]);
        //         cout << arr[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // return res;
        vector<vector<int>> grid(n, vector<int>(n, n));
        
        for (auto& m : mines) {
            grid[m[0]][m[1]] = 0;
        }
            
        for (int i = 0; i < n; i++) {
            for (int j = 0, k = n - 1, l = 0, r = 0, u = 0, d = 0; j < n; j++, k--) {
                grid[i][j] = min(grid[i][j], l = (grid[i][j] == 0 ? 0 : l + 1));
                grid[i][k] = min(grid[i][k], r = (grid[i][k] == 0 ? 0 : r + 1));
                grid[j][i] = min(grid[j][i], u = (grid[j][i] == 0 ? 0 : u + 1));
                grid[k][i] = min(grid[k][i], d = (grid[k][i] == 0 ? 0 : d + 1));
            }
        }
            
        int res = 0;
            
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                res = max(res, grid[i][j]);
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
            
        return res;
    }
};

int main(){
    Solution solution;
    vector<vector<int> > mines;
    mines.push_back({3, 0});
    mines.push_back({3, 3});
    mines.push_back({4, 2});
    cout << solution.orderOfLargestPlusSign(5, mines) << endl;

    return 0;
}