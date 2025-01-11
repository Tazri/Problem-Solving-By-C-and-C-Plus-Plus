// link : https://codeforces.com/problemset/problem/266/B
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

int main()
{
    optimize();
    string line;
    int n, t;
    cin >> n >> t >> line;

    while (t--)
    {
        for (int i = 1; i < n; i++)
        {
            if (line[i] == 'G' && line[i - 1] == 'B')
            {
                line[i] = 'B';
                line[i - 1] = 'G';
                i++;
            }
        }
    }

    cout << line << endl;
    return 0;
}