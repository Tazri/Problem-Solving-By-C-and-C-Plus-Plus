// link : https://codeforces.com/problemset/problem/1971/D
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

    int alter = 1;

    for (int i = 1; i < s.size(); i++)
        if (s[i] != s[i - 1])
            alter++;

    if (alter == 1)
    {
        cout << 1 << endl;
        return;
    }

    if (s[0] == '1')
        alter--;

    if (alter > 1)
        alter--;

    if (s[0] == '1')
        alter++;

    cout << alter << endl;
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