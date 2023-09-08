#include <bits/stdc++.h>

using namespace std;

int n;
int a[10005];

int main(){ 
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int tmp = 0;
        int mark = 0;
        for (int i = 0; i < n; i++){
            if (a[i] % (i + 1 - tmp) != 0){
                tmp++;
            }
            else {
                mark = 1;
                i = n;
            }
        }
        if (mark = 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}