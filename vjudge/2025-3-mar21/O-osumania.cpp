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
    vector<int> ans(n, 0);

    for (int i = 0, li = n - 1; i < n; i++, li--)
    {
        string s;
        cin >> s;
        int d = 0;
        for (int j = 0; j < 4; j++)
        {
            if (s[j] == '#')
            {
                d = j + 1;
                break;
            }
        }

        ans[li] = d;
    }

    cout << ans[0];
    for (int i = 1; i < n; i++)
        cout << " " << ans[i];
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