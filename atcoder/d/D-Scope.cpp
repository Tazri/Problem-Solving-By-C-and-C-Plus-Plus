// link : https://atcoder.jp/contests/abc283/tasks/abc283_d?lang=en
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

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        if (stk.empty())
        {
            stk.push(ai);
            continue;
        }

        if (stk.top() != ai)
        {
            stk.push(ai);
            continue;
        }

        while (stk.size() > 0 && stk.top() == ai)
        {
            ai += 1;
            stk.pop();
        }

        stk.push(ai);
    }

    cout << stk.size() << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}