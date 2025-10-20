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
    cin >> n >> k;
    string s;
    cin >> s;

    int fi = -1;
    for (int i = 0; i < n; i++)
        if (s[i] == '1')
        {
            fi = i;
            break;
        }

    int li = fi;
    int ans = fi == -1 ? 0 : 1;
    for (int i = li + 1; i < n; i++)
    {
        if (s[i] == '0')
            continue;

        int d = i - li;
        if (d <= (k - 1))
        {
            li = i;
            continue;
        }
        ans++;
        li = i;
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