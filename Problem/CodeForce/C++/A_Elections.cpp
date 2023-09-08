#include <bits/stdc++.h>

using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--){
        int a, b, c;
        cin >> a >> b >> c;
        int M = a;
        M = max(M, b);
        M = max(M, c);

        if (a == b && b == c){
            cout << 1 << " " << 1 << " " << 1 << endl;
        }
        else if (M == a && M == b){
            cout << 1 << " " << 1 << " " << M-c+1 << endl;
        }
        else if (M == a && M == c){
            cout << 1 << " " << M-b+1 << " " << 1 << endl;
        }
        else if (M == b && M == c){
            cout << M-a+1 << " " << 1 << " " << 1 << endl;
        }
        else if (M == a) {
            cout << 0 << " " << a-b+1 << " " << a-c+1 << endl;
        }
        else if (M == b){
            cout << b-a+1 << " " << 0 << " " << b-c+1 << endl;
        }
        else if (M == c){
            cout << c-a+1 << " " << c-b+1 << " " << 0 << endl;
        }

    }
    // fclose(stdin);

    return 0;
}