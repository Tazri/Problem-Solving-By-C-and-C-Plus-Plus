// link : https://codeforces.com/problemset/problem/2036/C
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

string s;
int cnt = 0;
int n;

bool is1100(int i)
{
    return s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0';
}

void decount(int i)
{
    if (i < (n - 3) && i >= 0)
    {
        if (is1100(i))
            cnt--;
    }
}

void count(int i)
{
    if (i < (n - 3) && i >= 0)
    {
        if (is1100(i))
            cnt++;
    }
}

void program()
{
    cnt = 0;
    cin >> s;
    n = s.size();
    int q;
    cin >> q;

    if (n < 4)
    {
        while (q--)
        {
            int si, v;
            cin >> si >> v;

            cout << "NO" << endl;
        }
        return;
    }

    for (int i = 0; i < n; i++)
        count(i);

    for (int qi = 0; qi < q; qi++)
    {
        int si, v;
        cin >> si >> v;
        si--;

        int start = si - 3;

        for (int i = start; i <= si; i++)
            decount(i);

        s[si] = v == 0 ? '0' : '1';
        for (int i = start; i <= si; i++)
            count(i);

        if (cnt > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
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