// link : https://codeforces.com/problemset/problem/1714/A
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

int getMp()
{
    int h, m;
    cin >> h >> m;
    int mp = (h * 60) + m;
    return mp;
}

int getDiff(int frmMp, int toMp)
{
    int last = 24 * 60;

    if (toMp >= frmMp)
    {
        return toMp - frmMp;
    }

    int lDiff = last - frmMp;
    return toMp + lDiff;
}

void test()
{
    int n, h, m;
    cin >> n >> h >> m;
    int mp = (h * 60) + m;
    int minDiff = 0;
    int tMp = getMp();
    minDiff = getDiff(mp, tMp);

    for (int i = 1; i < n; i++)
    {
        tMp = getMp();
        minDiff = min(minDiff, getDiff(mp, tMp));
    }

    int ansH = minDiff / 60;
    int ansM = minDiff % 60;
    cout << ansH << " " << ansM << endl;

    // cout << minDiff << endl;
    // cout << "minMp : " << minMp << endl;
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