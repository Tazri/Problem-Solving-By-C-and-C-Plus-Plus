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
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);

    for (int i = 2; i <= n; i++)
    {
        if (v[i])
            continue;

        for (int j = i + i; j <= n; j += i)
        {
            v[j]++;
        }
    }

    int ans = 0;
    for (int i : v)
    {
        if (i == 2)
            ans++;
    }

    cout << ans << endl;
}

int main()
{
    optimize();

    program();
    return 0;
}