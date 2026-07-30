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

int take(vector<int> d)
{
    vector<bool> st(7, false);

    for (int &di : d)
        st[di] = true;

    for (int i = 1; i <= 6; i++)
        if (st[i] == false)
            return i;

    return 0;
}

void program()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        int d = v[i];
        int op = 7 - d;

        if (v[i - 1] == d || v[i - 1] == op)
        {
            vector<int> rm = {d, op};
            if (i + 1 < n)
            {
                int fd = v[i + 1];
                int fop = 7 - fd;
                rm.push_back(fd);
                rm.push_back(fop);
            }

            int t = take(rm);
            v[i] = t;
            cnt++;
            continue;
        }

        if (i + 1 >= n)
            break;

        if (op == v[i + 1] || d == v[i + 1])
        {
            vector<int> rm = {op, d};

            if (i + 2 < n)
            {
                int fd = v[i + 2];
                int fop = 7 - fd;
                rm.push_back(fd);
                rm.push_back(fop);
            }
            int t = take(rm);
            v[i + 1] = t;
            cnt++;
        }
    }

    // for (int i = 0; i < n; i++)
    //     cout << v[i] << " \n"[i == n - 1];
    cout << cnt << endl;
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