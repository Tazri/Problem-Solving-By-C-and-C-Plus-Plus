// link : https://codeforces.com/problemset/problem/2103/B
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

    int cnt = 0;

    if (s[0] == '1')
        cnt++;

    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            cnt++;
    }

    if (cnt == 2)
        cnt--;
    else if (cnt > 2)
        cnt -= 2;

    cout << cnt + n << endl;
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