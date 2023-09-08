#include <bits/stdc++.h>

using namespace std;

int n;
int a[105];

int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        for (int i = 1; i <= n; i++){
            cin >> a[i];
        }

        int res = 0;
        for (int i = 1; i <= n; i++){
            if (a[i] > (i + res)){
                res += a[i] - i - res;
            }
            
        }
        cout << res << endl;
    }

    return 0;
}