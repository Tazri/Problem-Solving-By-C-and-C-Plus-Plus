// link : https://atcoder.jp/contests/abc311/tasks/abc311_b?lang=en
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
    int n, d;
    cin >> n >> d;

    vector<bool> vec(d, false);

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        for (int i = 0; i < d; i++)
        {
            if (s[i] == 'x')
            {
                vec[i] = true;
            }
        }
    }

    int mx = 0;
    int len = 0;
    for (int i = 0; i < d; i++)
    {
        if (!vec[i])
        {
            len++;
        }
        else
        {
            mx = max(mx, len);
            len = 0;
        }
    }
    mx = max(mx, len);

    cout << mx << endl;
}
int main()
{
    optimize();
    program();
    return 0;
}