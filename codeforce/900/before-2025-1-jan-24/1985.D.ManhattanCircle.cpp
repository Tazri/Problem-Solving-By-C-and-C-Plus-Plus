// link : https://codeforces.com/problemset/problem/1985/D
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

void test()
{
    int rw, cl;
    cin >> rw >> cl;
    int maxRw = 0, hashStart = 0, maxLen = 0;

    for (int i = 0; i < rw; i++)
    {
        int start = 0;
        bool isStart = false;
        int len = 0;
        for (int j = 0; j < cl; j++)
        {
            char ch;
            cin >> ch;

            if (ch == '.')
            {
                continue;
            }

            if (isStart)
            {
                len++;
                continue;
            }
            isStart = true;
            start = j;
            len++;
        }

        if (len > maxLen)
        {
            maxLen = len;
            hashStart = start;
            maxRw = i;
        }
    }

    // cout << "maxLen : " << maxLen << endl;
    // cout << "hashStart : " << hashStart << endl;
    // cout << "maxRw : " << maxRw << endl;
    int mid = ceil((maxLen * 1.0) / 2.0);

    int maxCl = hashStart + mid - 1;

    cout << maxRw + 1 << " " << maxCl + 1 << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}