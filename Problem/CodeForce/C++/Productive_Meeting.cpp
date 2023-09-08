#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin >> t;

    while (t--){
        priority_queue <pair<int, int>> arr;
        vector <pair<int, int>> ans; 
        int num;
        cin >> n;

        for (int i = 1; i <= n; i++){
            cin >> num;
            if (num ) arr.push({num, i});
        }

        while (arr.size() > 1){
            pair <int, int> u = arr.top();
            arr.pop();

            pair <int, int> v = arr.top();
            arr.pop();

            ans.push_back({v.second, u.second});
            if (--u.first) arr.push(u);
            if (--v.first) arr.push(v);
        }

        cout << ans.size() << endl;
        for (auto c : ans){
            cout << c.first << " " << c.second << endl;
        }
        
    }

    return 0;
}