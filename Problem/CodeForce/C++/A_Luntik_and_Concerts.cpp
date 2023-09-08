#include <bits/stdc++.h>

using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    int t;
    int a, b, c;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        int sum = a + b * 2 + c * 3;
        if (sum % 2 == 0){
            cout << 0 << endl;
        }
        else cout << 1 << endl;
    }
    // fclose(stdin);
    return 0;
}