#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, m;
        cin >> a >> b >> c >> m;
        if ((a + b  +c) - 3 >= m && (a + b + c) + m >= max(max(a, b), c)*2 - 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}