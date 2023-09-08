#include <bits/stdc++.h>

using namespace std;
int n;
vector<int> arr;
vector<pair<int, char>> ans;
string S;
int tmp;

void input()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        arr.push_back(tmp);
    }
    getchar();
    cin >> S;
}

void solve()
{
    sort(arr.begin(), arr.end());
    int balance = 0;
    int index = 0;

    for (char c : S)
    {
        if (c == 'L')
        {
            if (balance - arr[index] > 0)
            {
                ans.push_back({arr[index], 'R'});
                balance = balance - arr[index];
            }
            else
            {
                ans.push_back({arr[index], 'L'});
                balance = balance + arr[index];
            }
            index++;
        }
        else
        {
            if (balance + arr[index] < 0)
            {
                ans.push_back({arr[index], 'L'});
                balance = balance + arr[index];
            }
            else
            {
                ans.push_back({arr[index], 'R'});
                balance = balance - arr[index];
            }
            index++;
        }
        // cout << c << " " << balance << endl;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    input();
    fclose(stdin);

    solve();
    if (ans.size() == n)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i].first << " " << ans[i].second << endl;
        }
    }
    else
        cout << -1;

    return 0;
}