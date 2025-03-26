// link : https://atcoder.jp/contests/abc306/tasks/abc306_a?lang=en
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
    int n;
    string s;
    cin >> n;
    cin >> s;

    for (char ch : s)
        cout << ch << ch;
    cout << endl;
    return 0;
}