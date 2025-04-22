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
    vector<bool> mp(1e9 + 1, false);

    bool isOk = true;
    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        if (!isOk)
            continue;

        if (mp[ai])
        {
            isOk = false;
        }
        mp[ai] = true;
    }

    if (isOk)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}