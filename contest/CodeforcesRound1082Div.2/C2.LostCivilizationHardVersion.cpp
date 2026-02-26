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

int fs(int n)
{
    return ((n + 1) * n) / 2;
}

void program()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    reverse(v.begin(), v.end());

    vector<int> pre(n);

    for (int &vi : v)
        cout << vi << " ";
    cout << endl;

    stack<int> stk;
    for (int i = 0; i < n; i++)
    {
        if (stk.empty())
        {
            stk.push(v[i]);
            pre[i] = stk.size();
            continue;
        }

        if (v[i] + 1 == stk.top())
        {
            int tp = stk.top();

            while (stk.size() && stk.top() == tp)
                stk.pop();
            stk.push(v[i]);
            pre[i] = stk.size();
            continue;
        }
        stk.push(v[i]);
        pre[i] = stk.size();
    }

    vector<int> prefix(n);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            prefix[i] = pre[i];
            continue;
        }

        prefix[i] = pre[i] + prefix[i - 1];
    }

    for (int pi : pre)
        cout << pi << " ";
    cout << endl;
    for (int pi : prefix)
        cout << pi << " ";
    cout << endl;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += pre[i] + fs(v[i]);
    }

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}