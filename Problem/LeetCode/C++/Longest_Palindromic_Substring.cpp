#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s){
        /* Xem Si có phải là tâm của Palindrome có lẻ kí tự không? (ví dụ Palindrome MADAM có tâm là kí tự D)
        Xem Si và Si+1 có phải là tâm của Palindrome có chẵn kí tự không? (ví dụ Palindrome ABBA có tâm là 2 kí tự BB)
        Với mỗi kí tự ta tìm palindrome dài nhất nhận nó là tâm, cập nhập lại kết quả khi duyệt. Ta duyệt từ giữa ra để dùng kết quả hiện tại làm cận.
        */

        if (s.length() <= 1) return s;
        int n = s.length();
        int min_start = 0;
        int max_len = 1;
        int i = 0;
        while ( i < n ){
            if (n - i < max_len/2) break;
            int start = i, end = i; 

            while (end < n -1) {
                if (s[end] != s[end+1]) break;
                end++;
            }

            i = end + 1;
            // cout << i << " " << end << " " << start << endl;
            while (start > 0 && end < n -1 ){
                // cout << 1 << endl;
                if (s[start -1] != s[end + 1]){
                    break;
                    
                }
                start--;
                end++;
            }
            // cout << 2 << endl;
            int new_len = end - start + 1;
            if (max_len < new_len) {
                max_len = new_len;
                min_start = start;
            }

        }
        // cout << 3 << endl;
        return s.substr(min_start, max_len);
    }
};

int main(){
    Solution solution;
    cout << solution.longestPalindrome("ac") << endl;

    return 0;
}