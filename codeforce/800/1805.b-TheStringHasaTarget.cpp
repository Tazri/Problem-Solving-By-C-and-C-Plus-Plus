// link : https://codeforces.com/problemset/problem/1805/B
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

    int mn = n - 1;

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] < s[mn])
        {
            mn = i;
        }
    }

    cout << s[mn];
    for (int i = 0; i < n; i++)
    {
        if (mn == i)
            continue;
        cout << s[i];
    }
    cout << endl;
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