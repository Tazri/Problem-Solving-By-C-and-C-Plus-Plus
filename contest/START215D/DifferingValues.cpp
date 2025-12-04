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

    int one = 0, zero = 0;

    string s;
    cin >> s;

    for (char ch : s)
        if (ch == '0')
            zero++;
        else
            one++;

    vector<int> lens;
    vector<bool> visited(n + 1, false);
    lens.reserve(n);
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;
        int cnt = 0;
        for (int j = i; j <= n; j += k)
        {
            visited[j] = true;
            cnt++;
        }
        lens.push_back(cnt);
    }

    int odd = 0;

    for (int li : lens)
    {
        int rm = li / 2;

        if (li & 1)
            odd++;
        if (rm > one || rm > zero)
        {
            cout << "NO" << endl;
            return;
        }
        one -= rm;
        zero -= rm;
    }

    if (odd == (one + zero))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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