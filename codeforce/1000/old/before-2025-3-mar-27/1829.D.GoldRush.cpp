// link : https://codeforces.com/problemset/problem/1829/D
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
    int n, m;
    cin >> n >> m;

    if (n < m)
    {
        cout << "NO" << endl;
        return;
    }

    vector<int> stack;
    map<int, bool> mp;

    stack.push_back(n);

    while (stack.size())
    {
        int num = stack.back();
        stack.pop_back();

        if (num == m)
        {
            cout << "YES" << endl;
            return;
        }

        if (num % 3 != 0)
            continue;

        int a = num / 3;
        int b = num - a;

        if (!mp.count(a))
        {
            stack.push_back(a);
            mp[a] = true;
        }

        if (!mp.count(b))
        {
            stack.push_back(b);
            mp[b] = true;
        }
    }

    cout << "NO" << endl;
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