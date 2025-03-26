// link : https://atcoder.jp/contests/abc312/tasks/abc312_c?lang=en
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
    int n, m;
    cin >> n >> m;
    vector<int> sellers(n);
    vector<int> buyers(m);

    // get sellers and buyers
    for (int i = 0; i < n; i++)
        cin >> sellers[i];
    for (int i = 0; i < m; i++)
        cin >> buyers[i];

    // sort seller and buyer
    sort(sellers.begin(), sellers.end(), [](int a, int b)
         { return a < b; });
    sort(buyers.begin(), buyers.end(), [](int a, int b)
         { return a > b; });

    int l = sellers[0];
    int r = sellers[n - 1];
    int found = -1;
    int buyed = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int s = 0;
        int b = 0;

        for (int i = 0; i < n; i++)
        {
            if (mid >= sellers[i])
            {
                s++;
            }
            else
            {
                break;
            }
        }

        for (int i = 0; i < m; i++)
        {
            if (mid <= buyers[i])
            {
                b++;
            }
            else
            {
                break;
            }
        }

        if (s >= b)
        {
            if (found == -1)
            {
                found = mid;
                buyed = b;
            }
            else if (mid < found)
            {
                buyed = b;
                found = mid;
            }
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    if (found != -1 && buyed != 0)
    {
        cout << found << endl;
        return 0;
    }
    int ans = buyers[0] + 1;

    for (int i = 0; i < n; i++)
    {
        if (ans == sellers[i])
            ans++;
    }

    cout << ans << endl;

    return 0;
}