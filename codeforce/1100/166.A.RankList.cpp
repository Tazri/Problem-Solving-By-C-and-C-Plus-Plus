// link : https://codeforces.com/problemset/problem/166/A

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main()
{
    optimize();

    int n, k;

    cin >> n >> k;

    vector<pair<int, int>> teams(n);

    for (int i = 0; i < n; i++)
    {
        cin >> teams[i].first >> teams[i].second;
    }

    sort(teams.begin(), teams.end(), compare);
    reverse(teams.begin(), teams.end());

    // cout << "-------after sort------" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "teams[" << i << "] : ";
    //     cout << teams[i].first << "," << teams[i].second << endl;
    // }

    // cout << "\n\nresult : " << endl;
    int total = 1;
    pair<int, int> curr = teams[k - 1];

    for (int i = k; i < n; i++)
    {
        if (teams[i] == curr)
            total++;
        else
        {
            break;
        }
    }

    for (int i = k - 2; i >= 0; i--)
    {
        if (teams[i] == curr)
            total++;
        else
        {
            break;
        }
    }

    cout << total << endl;
    return 0;
}