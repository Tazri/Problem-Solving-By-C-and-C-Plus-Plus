// link : https://codeforces.com/problemset/problem/2042/B
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
    vector<int> mp(n + 1, 0);
    vector<int> colors;

    for (int i = 0; i < n; i++)
    {
        int marbel;
        cin >> marbel;

        if (mp[marbel] == 0)
        {
            colors.push_back(marbel);
            mp[marbel]++;
        }
        else
        {
            mp[marbel]++;
        }
    }

    // sort the color
    sort(colors.begin(), colors.end(), [](int a, int b)
         { return a > b; });

    int totalOneColor = 0;
    int totalMultiColor = 0;

    for (int color : colors)
    {
        if (mp[color] == 1)
        {
            totalOneColor++;
        }
        else
        {
            totalMultiColor++;
        }
    }

    int score = 0;
    int forOneColor = totalOneColor & 1 ? ((totalOneColor / 2) + 1) * 2 : (totalOneColor / 2) * 2;
    score += forOneColor + totalMultiColor;

    cout << score << endl;
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