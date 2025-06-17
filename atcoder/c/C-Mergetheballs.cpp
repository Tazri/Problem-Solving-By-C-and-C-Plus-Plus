// link : https://atcoder.jp/contests/abc351/tasks/abc351_c?lang=en
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
    set<char> box;
    stack<char> stk;

    for (char ch : s)
    {
        if (ch == '(')
        {
            stk.push(ch);
            continue;
        }

        if (ch != ')')
        {
            if (box.count(ch))
            {
                cout << "No" << endl;
                return;
            }

            box.insert(ch);
            stk.push(ch);
            continue;
        }

        while (stk.size() > 0)
        {
            char top = stk.top();

            if (top == '(')
            {
                stk.pop();
                break;
            }

            box.erase(box.find(top));
            stk.pop();
        }
    }

    cout << "Yes" << endl;
}

int main()
{
    optimize();

    program();
    return 0;
}