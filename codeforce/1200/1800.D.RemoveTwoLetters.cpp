// link : https://codeforces.com/problemset/problem/1800/D
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

    int cnt = n - 1;
    int rm = 0;
    for (int i = 1; i < n - 1; i++)
        if (s[i - 1] == s[i + 1])
            rm++;

    cnt -= rm;

    cout << cnt << endl;
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