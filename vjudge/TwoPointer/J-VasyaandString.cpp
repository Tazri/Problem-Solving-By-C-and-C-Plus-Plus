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

    int ans = 0;
    // try make all a

    int rm = k;
    int l = 0;
    int r = 0;
    while (r < n)
    {
        if (s[r] == 'a')
        {
            int len = r - l + 1;
            ans = max(len, ans);
            r++;
            continue;
        }

        if (rm > 0)
        {
            int len = r - l + 1;
            ans = max(len, ans);
            r++;
            rm--;
            continue;
        }

        while (l < r && rm == 0)
        {
            if (s[l] == 'b' && rm < k)
                rm++;
            l++;
        }

        if (l == r)
        {
            while (s[l] == 'b')
            {
                l++, r++;
            }
        }
        else
            r++;
    }

    rm = k;
    l = 0;
    r = 0;
    while (r < n)
    {
        if (s[r] == 'b')
        {
            int len = r - l + 1;
            ans = max(len, ans);
            r++;
            continue;
        }

        if (rm > 0)
        {
            int len = r - l + 1;
            ans = max(len, ans);
            r++;
            rm--;
            continue;
        }

        while (l < r && rm == 0)
        {
            if (s[l] == 'a' && rm < k)
                rm++;
            l++;
        }

        if (l == r)
        {
            while (s[l] == 'a')
            {
                l++, r++;
            }
        }
        else
            r++;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}