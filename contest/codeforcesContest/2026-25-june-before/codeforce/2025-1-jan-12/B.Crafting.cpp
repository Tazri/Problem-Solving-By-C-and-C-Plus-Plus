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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> diff(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int minusCount = 0;
    int minus = 0;

    for (int i = 0; i < n; i++)
    {
        diff[i] = a[i] - b[i];

        if (diff[i] < 0)
        {
            minusCount++;
            minus = diff[i];
        }

        if (minusCount > 1)
        {
            cout << "NO" << endl;
            return;
        }
    }

    // get the minum diff
    bool isStart = false;
    int minDiff = 0;

    for (int i = 0; i < n; i++)
    {
        if (diff[i] < 0)
        {
            continue;
        }

        if (isStart)
        {
            minDiff = min(diff[i], minDiff);
        }
        else
        {
            minDiff = diff[i];
            isStart = true;
        }
    }

    isStart = false;
    int minAi = 0;

    for (int i = 0; i < n; i++)
    {
        if (diff[i] < 0)
        {
            continue;
        }
        if (isStart)
        {
            minAi = min(a[i], minAi);
        }
        else
        {
            isStart = true;
            minAi = a[i];
        }
    }

    int need = minus * -1;

    // cout << "need : " << need << endl;
    // cout << "minAi : " << minAi << endl;
    // cout << "minDiff : " << minDiff << endl;

    if (minDiff >= need && minAi >= need)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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