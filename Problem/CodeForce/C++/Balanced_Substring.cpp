#include <bits/stdc++.h>

using namespace std;

void Solution(string s){
    // int arr[100] = {0};

    // int n = s.length();
    // int L, R;
    // int min = 0, max = 0;

    // for (int i = 0; i < n; i++){
    //     if (s[i] == 'a'){
    //         arr[i+1] = arr[i] + 1;
    //     }
    //     else {
    //         arr[i+1] = arr[i] - 1;
    //     }
    //     // cout << arr[i+1] << endl;
    //     min = arr[i+1] < min ? arr[i+1] : min;
    //     max = arr[i+1] > max ? arr[i+1] : max;
    // }


    // // cout << min << " " << max << endl;
    // vector <int> X[50];
    // X[0 - min].push_back(0);
    // int tmp;
    // for (int i = 1; i <= n; i++){
    //     tmp = arr[i];
    //     // cout << tmp << endl;
    //     X[tmp - min].push_back(i);
    // }
    // // cout << "1" << endl;
    // for(int i = max - min; i >= 0; i--){
    //     if (X[i].size() >= 2){
    //         R = X[i].back();
    //         X[i].pop_back();
    //         L = X[i].back() + 1;
    //         break;
    //     }
    // }
    // // cout << "ok" << endl;
    // if (R != 0){
    //     cout << L << " " << R << endl;
    // }
    // else {
    //     cout << -1 << " " << -1 << endl;
    // }
    int n = s.length();
    for (int i = 0; i < n - 1; i++) {
        if (s[i] != s[i + 1]) {
            cout << i + 1 << " " << i + 2 << endl;
            return;
        }
    }

    cout << -1 << " " << -1 << endl;
}


int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        string s;
        cin >> n;
        cin >> s;

        Solution(s);
    }

    return 0;
}