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

    int si = n;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            si = i;
            break;
        }
    }

    int a = 0;
    int b = 0;
    int prev = 'A';
    int ans = 0;
    for (int i = si; i < n; i++)
    {
        if (prev == s[i])
        {
            if (s[i] == 'A')
                a++;
            else if (s[i] == 'B')
                b++;

            continue;
        }

        if (s[i] == 'B')
        {
            prev = 'B';
            b++;
            continue;
        }

        if (s[i] == 'A')
        {
            prev = 'A';
            ans += (a + b - 1);
            a = 2;
            b = 0;
        }
    }

    if (prev == 'B')
    {
        ans += (a + b - 1);
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