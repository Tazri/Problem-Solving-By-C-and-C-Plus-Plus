// link : https://codeforces.com/problemset/problem/1873/D
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

    int i = 0;
    int op = 0;
    while (i < s.size())
    {
        if (s[i] == 'W')
        {
            i++;
            continue;
        }

        for (int t = 0; t < k && i + t < s.size(); t++)
        {
            s[i + t] = 'W';
        }
        op++;
        i += k;
    }

    cout << op << endl;
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