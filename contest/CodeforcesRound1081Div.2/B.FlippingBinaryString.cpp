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
    string s;
    cin >> s;

    vector<int> v0;
    vector<int> v1;
    int zero = 0;
    int one = 0;
    for (int i = 0; i < n; i++)
    {
        int id = i + 1;

        if (s[i] == '0')
            v0.push_back(id);
        else
            v1.push_back(id);
    }

    zero = v0.size();
    one = v1.size();

    if (zero == n)
    {
        cout << 0 << endl;
        return;
    }

    if ((zero - 1) % 2 == 0 && zero % 2 == 1)
    {
        cout << v0.size() << endl;
        for (int i = 0; i < v0.size(); i++)
            cout << v0[i] << " \n"[i == v0.size() - 1];
    }
    else if ((one - 1) % 2 == 1 && one % 2 == 0)
    {
        cout << v1.size() << endl;
        for (int i = 0; i < v1.size(); i++)
            cout << v1[i] << " \n"[i == v1.size() - 1];
    }
    else
    {
        cout << -1 << endl;
    }
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}