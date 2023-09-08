#include <bits/stdc++.h>

using namespace std;
int n;
string str;

void solve(){
    int res = 1000000;
    set <int> A;
    for (char c : str){
        A.insert(c);
    }

    for(auto i = A.begin(); i != A.end(); i++){
        char c = *i;
        int R = n - 1, L = 0;
        int mark = 0;
        cout << c << " " ;
        int cnt = 0;
        while (L < R){
            // cout << (str[L] == str[R]) << endl;
            if (str[L] == str[R]){
                if ((R - L) <= 2){
                    mark = 1;
                    R = L;
                }
                else {
                    L++;
                    R--;
                }
            }
            else {
                if (str[L] == c){   
                    cnt++;    
                    L++;
                }
                else if (str[R] == c){
                    cnt++;
                    R--;
                }
                else {
                    R = L;
                }
            }
        }
        if (mark == 1) res = min(res, cnt);
    }

    if (res != 1000000) cout << res << endl;
    else cout << -1 << endl;
}


int main(){
    freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        getchar();
        cin >> str;
        solve();
    }
    fclose(stdin);

    return 0;
}