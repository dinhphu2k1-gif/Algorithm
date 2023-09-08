#include <bits/stdc++.h>

using namespace std;

int n;
vector <int> a;

int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        int tmp;
        a.push_back(0);
        for (int i = 0; i < n; i++){
            cin >> tmp;
            a.push_back(tmp);
        }

        int res = 0;
        int cnt = 0;
        for (int i = 1; i <= n; i++){
            if (a[i-1] < a[i]){
                cnt++;
            }
            if (a[i-1] > a[i]){
                cout << cnt << endl;
                res = res ^ cnt;
                cnt = 1;
            }
        }
        cout << cnt << endl;
        res = res ^ cnt;

        if (n == 2){
            cout << "YES" << endl;
        }
        else {
            if (res == 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    return 0;
}