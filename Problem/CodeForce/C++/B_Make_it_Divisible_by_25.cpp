#include <bits/stdc++.h>

using namespace std;
string str;

pair<int, int> find_two_num(char k){
    char prefix[5];
    if (k == '0'){
        prefix[0] = '0';
        prefix[1] = '5';
    }
    else {
        prefix[0] = '2';
        prefix[1] = '7';
    }
    int start = 0, end = 0;
    for (int i = str.length() - 1; i >= 0; i--){
        if (str[i] == k){
            end = i;
            break;
        }
    }
    // cout << end << " " << k << endl;

    for (int i = end - 1; i >= 0; i--){
        if (str[i] == prefix[0] || str[i] == prefix[1]){
            start = i;
            break;
        }
    }
    return {start, end};
}

int main(){
    // freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {   
        int ans;
        cin >> str;
        pair<int, int> x, y;

        x = find_two_num('0');
        y = find_two_num('5');
        int len = str.length();
        // cout << x.first << " " << x.second << " " << y.first << " " << y.second << endl;
        ans = min(len - x.first - 2, len - y.first - 2);
        cout << ans << endl;
    }
    // fclose(stdin);
    return 0;
}