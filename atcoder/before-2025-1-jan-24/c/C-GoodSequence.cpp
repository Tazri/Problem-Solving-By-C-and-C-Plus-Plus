// link : https://atcoder.jp/contests/arc087/tasks/arc087_a
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
    int n;
    unordered_map<int, int> count;

    int r = 0;
    int nm;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nm;

        if (count.find(nm) == count.end())
        {
            count[nm] = 1;
        }
        else
        {
            if (count[nm] < nm)
            {
                count[nm]++;
            }
            else
            {
                r++;
            }
        }
    }

    for (auto pair : count)
    {
        if (pair.first != pair.second)
        {
            r += pair.second;
        }
    }

    cout << r << endl;
    return 0;
}