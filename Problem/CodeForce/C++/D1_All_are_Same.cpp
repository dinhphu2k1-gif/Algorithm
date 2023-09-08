#include <bits/stdc++.h>

using namespace std;

int n;
set <int> arr;

void solve(){
    set <int>::iterator it = arr.begin();
    int prev = *it;
    int cur = *(++it);
    
}

int main(){
    freopen("input.txt", "r", stdin);
    int t;
    cin >> t;   
    while(t--){
        cin >> n;
        int tmp;
        for (int i = 0; i < n; i++){
            cin >> tmp;
            arr.insert(tmp);
        }
        if (arr.size() == 1) cout << -1 << endl;
        else solve();
        arr.clear();
    }
    fclose(stdin);
    return 0;
}