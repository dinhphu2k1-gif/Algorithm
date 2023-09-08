#include <bits/stdc++.h>

using namespace std;
int n, k;
map <int, int> arr;

void solve(){
    int ans = 0;
    int cat = 0;
    map <int, int> ::iterator it = arr.end();
    it--;
    while (cat < it->first){
        if (it->second == 0){
            it--;
            continue;
        }

        ans += 1;
        it->second -= 1;
        cat += n - it->first;
    }

    cout << ans << endl;
}

int main(){
    freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--){
        cin >> n >> k;
        int tmp;
        for (int i = 0; i < k; i++){
            cin >> tmp;
            arr[tmp] += 1;
        }
        arr[0] = 0;
        solve();
        arr.clear();
    }
    fclose(stdin);

    return 0;
}