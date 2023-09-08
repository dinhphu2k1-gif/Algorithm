#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll n, k;
ll hour, num_copy;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;

    while (t--){
        cin >> n >> k;
        
        hour = 0;
        num_copy = 1;
        while (num_copy < n){
            if (num_copy <= k){
                num_copy *= 2;
                hour++;
            }
            else {
                hour += ceil((n - num_copy) * 1.0 / k);
                num_copy = n;
            }
        }

        cout << hour << endl;
    }

    return 0;
}