#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    char s[100];
    cin >> t;
    while(t--){
        cin >> n >> s;
        // cout << n << s << endl;
        int ans = 0;
        for (int i = 0; i < n; i++){
            ans += s[i] - '0' + (s[i] != '0' && i != n-1);
            // cout << (s[i] != '0' && i != n-1) << endl;
        }
        cout << ans << endl;
    }
    return 0;
}