// link : https://cses.fi/problemset/task/1069
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

    int len = 1;
    int mx = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            len++;
        else
        {
            mx = max(len, mx);
            len = 1;
        }
    }

    mx = max(len, mx);
    cout << mx << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}