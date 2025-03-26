// link : https://atcoder.jp/contests/abc315/tasks/abc315_a?lang=en
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

int main()
{
    optimize();
    string s;
    cin >> s;

    for (char ch : s)
    {
        if (ch == 'a' || ch == 'i' || ch == 'e' || ch == 'o' || ch == 'u')
            continue;
        cout << ch;
    }
    cout << endl;
    return 0;
}