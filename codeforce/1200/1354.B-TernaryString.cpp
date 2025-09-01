// link : https://codeforces.com/problemset/problem/1354/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    string s;
    cin >> s;
    int n = s.size();

    int one = 0;
    int two = 0;
    int three = 0;
    int l = 0;
    int r = 0;
    bool found = false;
    int ans = n;
    while (r < n)
    {
        char ch = s[r];

        if (ch == '1')
            one++;
        else if (ch == '2')
            two++;
        else
            three++;

        if (one == 0 || two == 0 || three == 0)
        {
            r++;
            continue;
        }

        while (one && two && three)
        {
            found = true;
            int len = r - l + 1;
            ans = min(ans, len);

            if (s[l] == '1')
                one--;
            else if (s[l] == '2')
                two--;
            else
                three--;

            l++;
        }

        r++;
    }

    cout << (found ? ans : found) << endl;
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