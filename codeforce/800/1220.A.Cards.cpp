// link : https://codeforces.com/problemset/problem/1220/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

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
    int n;
    cin >> n;
    string s;
    cin >> s;

    int one = 0;
    int zero = 0;

    for (char ch : s)
    {
        if (ch == 'z')
            zero++;
        else if (ch == 'n')
            one++;
    }

    vector<int> ans;

    for (int i = 0; i < one; i++)
        ans.push_back(1);
    for (int i = 0; i < zero; i++)
        ans.push_back(0);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " \n"[i == ans.size() - 1];
}

int32_t main()
{
    optimize();

    int t = 1;
    // cin >> t;
    while (t--)
        program();
    return 0;
}