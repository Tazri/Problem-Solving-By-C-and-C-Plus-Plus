// link : https://atcoder.jp/contests/abc292/tasks/abc292_a?lang=en
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

    for (int i = 0; i < s.size(); i++)
        s[i] = toupper(s[i]);

    cout << s << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}