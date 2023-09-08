#include <bits/stdc++.h>

using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--){
        int  n, tmp;
        int x = 0, y = 0; // x luu so so 0, y luu so so 1

        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> tmp;
            if (tmp == 0) x++;
            if (tmp == 1) y++;
        }
        unsigned long long res = y * pow(2, x);
        cout << res << endl;
    }
    // fclose(stdin);

    return 0;
}