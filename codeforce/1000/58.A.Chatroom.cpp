// link : https://codeforces.com/problemset/problem/58/A
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
    string hello = "hello";
    string s;
    cin >> s;
    int hi = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == hello[hi])
        {
            hello[hi] = 'x';
            hi++;
        }
    }

    if (hello == "xxxxx")
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}