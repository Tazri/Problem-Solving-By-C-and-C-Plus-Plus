// link : https://codeforces.com/contest/550/problem/A
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

    bool ab = false;
    bool ba = false;

    int i = 0;
    while (i < n - 1)
    {
        if (ab == false && s[i] == 'A' && s[i + 1] == 'B')
        {
            ab = true;
            i += 2;
        }
        else if (ab && s[i] == 'B' && s[i + 1] == 'A')
        {
            ba = true;
            i += 2;
        }
        else
        {
            i++;
        }

        if (ab && ba)
            break;
    }

    if (ab && ba)
    {
        cout << "YES" << endl;
        return;
    }

    ab = false;
    ba = false;
    i = 0;
    while (i < n)
    {
        if (ba == false && s[i] == 'B' && s[i + 1] == 'A')
        {
            ba = true;
            i += 2;
        }
        else if (ba && s[i] == 'A' && s[i + 1] == 'B')
        {
            ab = true;
            i += 2;
        }
        else
            i++;

        if (ab && ba)
            break;
    }

    if (ab && ba)
    {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
}

int main()
{
    optimize();
    // int t;
    // cin >> t;
    // while(t--)
    program();
    return 0;
}