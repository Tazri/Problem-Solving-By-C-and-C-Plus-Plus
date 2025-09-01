// link : https://codeforces.com/problemset/problem/1997/C
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
    string s;
    int cost = 0;

    cin >> s;
    stack<int> stk;
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];

        if (ch == '_')
        {
            if (stk.size() <= 0)
            {
                stk.push(i + 1);
            }
            else
            {
                int top = stk.top();
                stk.pop();
                int c = (i + 1) - top;
                cost += c;
            }
        }
        else if (ch == '(')
        {
            stk.push(i + 1);
        }
        else
        {
            int top = stk.top();
            stk.pop();
            int c = (i + 1) - top;
            cost += c;
        }
    }

    cout << cost << endl;
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