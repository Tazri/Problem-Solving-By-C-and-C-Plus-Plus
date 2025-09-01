// link : https://codeforces.com/problemset/problem/1363/B
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
    string s;
    cin >> s;
    int n = s.size();
    vector<int> zero(n);
    vector<int> one(n);

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            zero[i] = 1;
        else
            one[i] = 1;
    }

    for (int i = n - 2; i >= 0; i--)
        one[i] += one[i + 1];

    for (int i = 1; i < n; i++)
        zero[i] += zero[i - 1];

    // cout << "one : " << endl;
    // for (int oi : one)
    //     cout << oi << " ";
    // cout << endl;

    // cout << "zero : " << endl;
    // for (int zi : zero)
    //     cout << zi << " ";
    // cout << endl;

    int mn = min(one[0], zero[n - 1]);

    for (int i = 0; i < n - 1; i++)
    {
        int take = zero[i] + one[i + 1];
        mn = min(mn, take);
    }

    // now do it reverse
    zero = vector<int>(n);
    one = vector<int>(n);

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            zero[i] = 1;
        else
            one[i] = 1;
    }

    for (int i = n - 2; i >= 0; i--)
        zero[i] += zero[i + 1];

    for (int i = 1; i < n; i++)
        one[i] += one[i - 1];

    int ans = mn;
    mn = min(zero[0], one[n - 1]);

    for (int i = 0; i < n - 1; i++)
    {
        int take = one[i] + zero[i + 1];
        mn = min(mn, take);
    }

    ans = min(mn, ans);

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