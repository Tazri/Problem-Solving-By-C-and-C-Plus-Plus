// link : https://codeforces.com/problemset/problem/1472/C
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
    vector<int> arr(n + 1);
    vector<int> mp(n + 1, 0);

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int mxScore = 0;

    for (int p = n; p >= 1; p--)
    {
        // let journey
        int score = arr[p];

        int next = p + arr[p];

        while (next <= n)
        {
            if (mp[next])
            {
                score += mp[next];
                break;
            }

            score += arr[next];
            next += arr[next];
        }

        mp[p] = score;
        mxScore = max(mxScore, score);
    }

    cout << mxScore << endl;
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