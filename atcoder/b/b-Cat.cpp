// link : https://atcoder.jp/contests/abc286/tasks/abc286_b?lang=en
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
    cin >> s;

    int i = 0;
    while (i < n - 1)
    {
        if (s[i] != 'n')
        {
            cout << s[i];
            i++;
            continue;
        }

        if (s[i + 1] != 'a')
        {
            cout << s[i];
            i++;
            continue;
        }

        cout << "nya";
        i += 2;
    }

    if (i < n)
    {
        cout << s[n - 1];
    }

    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}