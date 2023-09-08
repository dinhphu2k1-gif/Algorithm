#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long

ull n, k;
ull a[11], b[11];

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        ull tmp;
        for (int i = 0; i < n; i++){
            cin >> tmp;
            a[i] = pow(10, tmp);
        }
        k++;
        ull res = 0;
        int i = 0;
        while (k > 0 && i < n - 1){
            tmp = a[i + 1] - a[i];
            // cout << tmp/a[i]  <<  endl;
            if (tmp / a[i] < k){
                res += tmp;
                k -= tmp / a[i];
            }
            else {
                res += k * a[i];
                k = 0;
            }
            // cout << res << " " << k << endl;
            i++;
        }

        if (k > 0){
            res += k * a[n - 1];
        }
        cout << res << endl;
    }
    return 0;
}