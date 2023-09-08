#include <bits/stdc++.h>

using namespace std;

string S;

int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> S;
        int n = S.length();
        int AB = 0, BA = 0;

        for (int i = 0; i < n - 1; i++){
            if (S[i] == 'a' && S[i+1] == 'b') AB += 1;
            if (S[i] == 'b' && S[i+1] == 'a') BA += 1;
        }

        if (AB == BA) cout << S << endl;
        else if (AB > BA){
            S[n-1] = 'a';
            cout << S << endl;
        }
        else {
            S[n-1] = 'b';
            cout << S << endl;
        }
    }
    return 0;
}