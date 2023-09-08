#include<bits/stdc++.h>

using namespace std;

int sol(int x, int n){
    vector <int> arr; 

    for (int i = 0; i < x; i++){
        arr.push_back(0);
    }

    int res;
    int t1, t2;
    for (int i = x; i <= n; i++){
        t1 = 0;
        for (int j = 1; j <= x; j++){
            t1 += arr[i - j];
        }
        t2 = pow(2, i - x);
        // cout << t1 << " " << t2 <<  " " << t1 + t2 << endl;
        arr.push_back(t1 + t2);
    }

    return arr.back();
}

int main(){
    int x, n;
    cin >> x >> n;
    cout << sol(x, n);

    return 0;
}