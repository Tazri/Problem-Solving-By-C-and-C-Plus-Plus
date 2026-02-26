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
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    stack<int> stk;

    for (int i = n - 1; i >= 0; i--)
    {
        if (stk.empty())
        {
            stk.push(v[i]);
            continue;
        }

        if (v[i] + 1 == stk.top())
        {
            int tp = stk.top();

            while (stk.size() && stk.top() == tp)
                stk.pop();
            stk.push(v[i]);
            continue;
        }
        stk.push(v[i]);
    }

    cout << stk.size() << endl;
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