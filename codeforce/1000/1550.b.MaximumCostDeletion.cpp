// link : https://codeforces.com/problemset/problem/1550/B
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
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    vector<int> arr;

    if (b >= 0)
    {
        int unit = a + b;
        cout << unit * n << endl;
        return;
    }

    int len = 1;

    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            len++;
        }
        else
        {
            arr.push_back(len);
            len = 1;
        }
    }
    arr.push_back(len);

    int ans = 0;

    for (int i = 1; i < arr.size(); i += 2)
    {
        int cost = arr[i] * a + b;
        ans += cost;
    }

    int cnt = 0;

    for (int i = 0; i < arr.size(); i += 2)
    {
        cnt += arr[i];
    }

    int cost = a * cnt + b;
    ans += cost;
    cout << ans << endl;
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