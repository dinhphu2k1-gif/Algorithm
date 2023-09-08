// #include <bits/stdc++.h>

// using namespace std;

// int tmp = 0;

// void Solution(string &str, int k, int mark, int n){
//     // cout << str << " " << k << " " << mark << endl;
//     if (tmp >= n) return;

//     if (k == 2 * n){
//         if (mark == 0){
//             tmp++;
//             cout << str << endl;
//         }
//         return ;
//     }
//     string s ;
//     if (mark == 0){
//         s = str + '(';
//         Solution(s, k + 1, mark + 1, n);
//     }
//     else {
//         s = str + '(';
//         Solution(s, k + 1, mark + 1, n);

//         s = str + ')';
//         Solution(s, k + 1, mark - 1, n);
//     }
// }

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         string str = "";
//         Solution(str, 0, 0, n);
//         tmp = 0;
//     }

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            int q;
            q = i;
            while (q--)
                cout << '(';
            q = i;
            while (q--)
                cout << ')';
            q = n - i;
            while (q--)
                cout << "()";
            cout << endl;
        }
    }
    return 0;
}