#include <bits/stdc++.h>

using namespace std;

int n, q;
vector <int> arr, res;
map <int, vector <int>> T;
vector <pair<int, int> > order;


void solve(){
    cin >> n;
    int tmp;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        arr.push_back(tmp);
    }

    cin >> q;
    res.resize(q);
    int a, b;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        order.push_back({a, b});
        T[b].push_back(a);
    }

    int k = 0;
    

}

int main(){
    freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--){

    }

    return 0;
}