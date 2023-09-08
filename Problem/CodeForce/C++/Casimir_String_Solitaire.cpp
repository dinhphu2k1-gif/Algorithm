#include <bits/stdc++.h>

using namespace std;

void Solution(string &str){
    int a = 0, b = 0, c = 0;
    for (char i : str){
        if (i == 'A') a++; 
        else if (i == 'B') b++; 
        else c++;
    }
    // cout << a << " " << b << " " << c << endl;
    if (a + c == b) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        string str;
        cin >> str;
        // cout << s << endl;
        Solution(str);
    }
    
    return 0;
}