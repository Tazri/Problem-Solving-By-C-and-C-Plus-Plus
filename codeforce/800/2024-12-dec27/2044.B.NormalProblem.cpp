// link : https://codeforces.com/problemset/problem/2044/B
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

void test()
{
    string s;
    cin >> s;

    // print it reverse
    for (int i = s.size() - 1; i >= 0; i--)
    {
        char ch = s[i];
        if (ch == 'p')
            cout << 'q';
        else if (ch == 'q')
            cout << 'p';
        else
            cout << 'w';
    }
    cout << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;

    while (t--)
        test();
    return 0;
}