// link : https://atcoder.jp/contests/abc233/tasks/abc233_b?lang=en
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
    int l, r;
    cin >> l >> r;
    string s;
    cin >> s;
    l--;
    r--;

    while (l < r)
    {
        char temp = s[l];
        s[l++] = s[r];
        s[r--] = temp;
    }

    cout << s << endl;
    return 0;
}