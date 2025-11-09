// link : https://codeforces.com/problemset/problem/1722/B
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
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;

    for (int i = 0; i < n; i++)
    {
        if (s1[i] == 'B' || s1[i] == 'G')
            s1[i] = '.';

        if (s2[i] == 'B' || s2[i] == 'G')
            s2[i] = '.';
    }

    if (s1 == s2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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