// link : https://codeforces.com/problemset/problem/1409/C
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

void program()
{
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> ans;
    ans.reserve(n);

    int d = y - x;
    vector<int> div;
    div.reserve(n);

    for (int i = 1; i * i <= d; i++)
    {
        if (d % i != 0)
            continue;
        int ri = d / i;
        div.push_back(i);

        if (ri != i)
            div.push_back(ri);
    }

    sort(div.begin(), div.end());

    int di = -1;

    for (int i : div)
    {
        int count = d / i;
        count += 1;
        if (count > n)
            continue;
        di = i;
        break;
    }

    ans.push_back(x);
    ans.push_back(y);
    int curr = x + di;

    while (ans.size() < n && curr < y)
    {
        ans.push_back(curr);
        curr += di;
    }

    curr = x - di;
    while (ans.size() < n && curr > 0)
    {
        ans.push_back(curr);
        curr -= di;
    }

    curr = y + di;
    while (ans.size() < n)
    {
        ans.push_back(curr);
        curr += di;
    }

    sort(ans.begin(), ans.end());
    for (int i = 0; i < n; i++)
        cout << ans[i] << " \n"[i == n - 1];
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}