// link : https://codeforces.com/problemset/problem/1769/B1
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
    vector<int> files(n);
    vector<bool> mp(100 + 1, false);
    int total_size = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> files[i];
        total_size += files[i];
    }
    vector<int> ans;
    int p1 = 0;
    int p2 = 0;
    int total_transfer = 0;
    // now simulate;

    for (int file : files)
    {
        for (int i = 0; i <= file; i++)
        {
            if (i != 0)
                total_transfer++;

            p1 = (100 * i) / file;
            p2 = (100 * total_transfer) / total_size;

            if (p1 == p2)
            {
                if (mp[p1] == false)
                {
                    cout << p1 << endl;
                    mp[p1] = true;
                }
            }
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}