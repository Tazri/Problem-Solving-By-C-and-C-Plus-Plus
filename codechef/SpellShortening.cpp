// link : https://www.codechef.com/problems/SHORTSPELL
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

    int indx = -1;

    for (int i = 1; i < n; i++)
    {
        int prev = (int)s[i - 1] - (int)'a';
        int now = (int)s[i] - (int)'a';

        if (prev > now)
        {
            indx = i - 1;
            break;
        }
    }

    if (indx < 0)
    {
        indx = n - 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (i == indx)
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