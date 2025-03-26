// link : https://atcoder.jp/contests/abc289/tasks/abc289_a?lang=en
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
        cout << (ch == '0' ? 1 : 0);
    cout << endl;
    return 0;
}