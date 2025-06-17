// link : https://codeforces.com/problemset/problem/81/A
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
    vector<char> stk;
    string s;
    cin >> s;

    for (char ch : s)
    {
        if (stk.empty())
        {
            stk.push_back(ch);
        }
        else
        {
            if (ch == stk.back())
            {
                stk.pop_back();
            }
            else
            {
                stk.push_back(ch);
            }
        }
    }

    for (char ch : stk)
        cout << ch;
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}