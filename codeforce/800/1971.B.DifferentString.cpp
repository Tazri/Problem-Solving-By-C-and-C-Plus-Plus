// link : https://codeforces.com/problemset/problem/1971/B
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

    int k = -1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != s[0])
        {
            k = i;
            break;
        }
    }

    if (k == -1)
    {
        cout << "NO" << endl;
        return;
    }

    swap(s[0], s[k]);
    cout << "YES" << endl;
    cout << s << endl;
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