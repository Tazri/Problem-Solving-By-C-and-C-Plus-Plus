// link : https://codeforces.com/problemset/problem/1760/C
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
    vector<int> arr(n);
    vector<int> ans(n);

    int fm = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[fm] < arr[i])
        {
            fm = i;
        }
    }

    int sm = -1;

    for (int i = 0; i < n; i++)
    {
        if (i == fm)
            continue;

        if (sm == -1)
        {
            sm = i;
        }
        else
        {
            if (arr[sm] < arr[i])
            {
                sm = i;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i == fm)
        {
            ans[i] = arr[i] - arr[sm];
        }
        else
        {
            ans[i] = arr[i] - arr[fm];
        }
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