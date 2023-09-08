#include <bits/stdc++.h>

using namespace std;

void Solution(vector <int> &arr){
    int n = arr.size();

    deque <int> res;
    res.push_back(arr[0]);
    // int front, back;

    for (int i = 1; i < n; i++){
        if (arr[i] < res.front()){
            res.push_front(arr[i]);
        }
        else {
            res.push_back(arr[i]);
        }
    }

    for (int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        int tmp;
        cin >> n;
        vector <int> arr;
        while (n--){
            cin >> tmp;
            arr.push_back(tmp);
        }

        Solution(arr);
    }
    return 0;
}