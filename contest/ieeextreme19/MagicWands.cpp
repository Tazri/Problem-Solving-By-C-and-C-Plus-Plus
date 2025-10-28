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
    int n, k;
    string s;
    cin >> n >> k >> s;

    vector<int> flip(n);
    int totalFliped = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (i - k >= 0)
            totalFliped -= flip[i - k];

        char ch = s[i];
        if (totalFliped % 2 == 1)
        {
            ch = ch == 'H' ? 'S' : 'H';
        }

        if (ch == 'H')
            continue;

        if (i + k - 1 >= n)
        {
            cout << -1 << endl;
            return;
        }

        flip[i] = 1;
        totalFliped++;
        ans++;
    }
    cout << ans << endl;
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