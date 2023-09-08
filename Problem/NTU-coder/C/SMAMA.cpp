#include <bits/stdc++.h>
using namespace std;

string getLucky(unsigned long long k)
{
    if (k == 1)
        return "4";
    if (k == 2)
        return "7";
    if (k % 2 == 0)
        return getLucky(k / 2 - 1) + "7";
    if (k % 2 == 1)
        return getLucky(k / 2) + "4";
}
int main()
{
    unsigned long long k;
    cin >> k;
    cout << getLucky(k);
    return 0;
}
