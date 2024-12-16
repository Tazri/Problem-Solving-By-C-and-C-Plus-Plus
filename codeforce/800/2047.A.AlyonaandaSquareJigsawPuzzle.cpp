// link : https://codeforces.com/problemset/problem/2047/A
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

    set<int> ok;

    int blocks = 1;
    int l = 1;
    ok.insert(1);

    while (blocks <= 10000)
    {
        blocks += (l * 4) + 4;
        ok.insert(blocks);
        l += 2;
    }

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a;
        int happy = 0;
        int totalBlocks = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a;
            totalBlocks += a;

            if (ok.find(totalBlocks) != ok.end())
            {
                happy++;
            }
        }

        cout << happy << endl;
    }
    return 0;
}