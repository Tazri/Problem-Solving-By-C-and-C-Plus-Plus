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

    if (n <= 3)
    {
        for (int i = 1; i <= n; i++)
            cout << i << " \n"[i == n];
        return;
    }

    vector<int> v(n + 1);
    vector<bool> mp((2 * n) + 1, false);
    int cn = n;
    if (n & 1)
    {
        v[n] = 1;
        n--;
    }

    int s = 2;
    int i = 1;
    while (i <= n)
    {
        if (mp[s] == false)
        {
            v[i] = s;
            v[i + 1] = s * 2;
            mp[s] = true;
            mp[s * 2] = true;
            i += 2;
            continue;
        }

        while (mp[s])
        {
            s++;
        }

        v[i] = s;
        v[i + 1] = s * 2;
        mp[s] = true;
        mp[s * 2] = true;

        i += 2;
    }

    for (int i = 1; i <= cn; i++)
        cout << v[i] << " \n"[i == cn];
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