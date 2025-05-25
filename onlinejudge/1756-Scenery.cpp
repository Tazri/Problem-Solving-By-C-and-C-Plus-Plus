// link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=5113
// not accepted yet
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

void program(int n, int t)
{

    vector<pair<int, int>> intervals(n);

    for (int i = 0; i < n; i++)
    {
        pair<int, int> interval;
        cin >> interval.first;
        cin >> interval.second;

        intervals[i] = interval;
    }

    sort(intervals.begin(), intervals.end(), [](pair<int, int> a, pair<int, int> b)
         { return a.second < b.second; });

    int prev = intervals[0].first + t;

    if (prev > intervals[0].second)
    {
        cout << "no" << endl;
        return;
    }

    for (int i = 1; i < n; i++)
    {
        int mx = max(intervals[i].first, prev);
        mx += t;

        if (mx > intervals[i].second)
        {
            cout << "no" << endl;
            return;
        }
        prev = mx;
    }

    cout << "yes" << endl;
}

int main()
{
    optimize();
    int n, t;
    while (cin >> n >> t)
        program(n, t);
    return 0;
}