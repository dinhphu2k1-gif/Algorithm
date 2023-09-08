#include <bits/stdc++.h>

using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    int t;
    string s;
    cin >> t;
    while (t--){
        cin >> s;
        char x = s[0];
        string y = "";
        for (int i = 1; i < s.length(); i++){
            if (s[i] < x) x = s[i];
        }
        int mark = 0;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == x && mark == 0){
                mark = 1;
                continue;
            }
            y += s[i];
        }
        cout << x <<" " << y <<endl;
    }
    // fclose(stdin);

    return 0;
}