#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    for (int i = n - x; i < x; i++)
    {
        if (b[i] != a[i])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}