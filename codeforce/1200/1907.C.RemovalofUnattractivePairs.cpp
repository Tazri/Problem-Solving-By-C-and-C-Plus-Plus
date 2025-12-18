// link : https://codeforces.com/problemset/problem/1907/C
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

    map<char, int> mp;

    for (char ch : s)
        mp[ch]++;

    int mxf = 0;
    for (char ch = 'a'; ch <= 'z'; ch++)
        mxf = max(mxf, mp[ch]);

    if (mxf > n / 2)
    {
        int ans = mxf - (n - mxf);
        cout << ans << endl;
        return;
    }

    if (n % 2 == 0)
        cout << 0 << endl;
    else
        cout << 1 << endl;
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