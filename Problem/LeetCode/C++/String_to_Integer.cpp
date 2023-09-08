#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int indicator = 1;
        int i = 0;
        int len = s.length();
        // remove whitespace
        while (i < len) {
            if (s[i] == ' ') i++;
            else break;
        }
        if (s[i] == '+' || s[i] == '-'){
            indicator = (s[i++] == '-') ? -1 : 1;
        }

        long long number = 0;
        while( i < len ) {
            if (isdigit(s[i])){
                number = number * 10 + s[i] - 48;
                if(number*indicator >= INT_MAX) return INT_MAX;
                if(number*indicator <= INT_MIN) return INT_MIN;
            } 
            else return number * indicator;
            i++;
        }
        
        return number * indicator;
    }
};

int main(){
    Solution test;
    cout << test.myAtoi("-91283472332");

    return 0;
}