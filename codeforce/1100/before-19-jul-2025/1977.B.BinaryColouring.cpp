// link : https://codeforces.com/problemset/problem/1977/B
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
    vector<int> ans(32, 0);

    int x;
    cin >> x;
    int i = 0;
    while (x)
    {
        ans[i++] = x & 1;
        x >>= 1;
    }

    i = 0;
    while (i < 30)
    {
        if (ans[i] == 0 || ans[i + 1] == 0)
        {
            i++;
            continue;
        }

        ans[i] = -1;
        i++;
        while (ans[i] != 0)
        {
            ans[i] = 0;
            i++;
        }
        ans[i] = 1;
    }

    cout << ans.size() << endl;
    cout << ans[0];
    for (int i = 1; i < ans.size(); i++)
        cout << " " << ans[i];
    cout << endl;
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