#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long long tmp = x;
        long long number = 0; // using to compare to x
        while (tmp > 0){
            number = number * 10 + tmp % 10;
            tmp /= 10;
        }

        return (x == number);
    }
};

int main(){
    Solution test;
    cout << test.isPalindrome(-121) << endl;
}