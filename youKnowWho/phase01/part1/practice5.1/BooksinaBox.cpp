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
    stack<int> stk;

    while (n--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int x;
            cin >> x;
            stk.push(x);
            continue;
        }

        if (type == 2)
        {
            if (stk.size())
                stk.pop();
            continue;
        }

        if (stk.size())
            cout << stk.top() << endl;
    }
}

int32_t main()
{
    optimize();
    program();
    return 0;
}