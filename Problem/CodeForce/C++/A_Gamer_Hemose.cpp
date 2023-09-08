#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    unsigned long long t, tmp;
    cin >> t;
    unsigned long long n, H;

    while (t--)
    {   
        cin >> n;
        cin >> H;
        vector <unsigned long long> arr;
        for (int j = 0; j < n; j++)
        {
            cin >> tmp;
            arr.push_back(tmp);
        }
        sort(arr.begin(), arr.end());

        unsigned long long ans;
        unsigned long long max1 = arr[n - 1], max2 = arr[n - 2];
        unsigned long long count = H / (max1 + max2);
        unsigned long long sub = H % (max1 + max2);

        if (sub > max1) ans = 2 * count + 2;
        else if (sub > 0) ans = count * 2 + 1;
        else ans = 2 * count;
        cout << ans << endl;
    }
    // fclose(stdin);

    return 0;
}
