// link : https://codeforces.com/problemset/problem/1665/C
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

void getV(int n, vector<int> &v)
{
    vector<int> input(n + 1, 0);

    for (int i = 0; i < n - 1; i++)
    {
        int fi;
        cin >> fi;
        input[fi]++;
    }

    vector<int> freq(n + 1, 0);

    for (int i = 0; i <= n; i++)
    {
        if (input[i])
            freq[input[i]]++;
    }

    v.reserve(n);

    for (int i = n; i >= 1; i--)
    {
        if (freq[i])
            for (int t = 0; t < freq[i]; t++)
                v.push_back(i);
    }
}

bool infacted(vector<int> v, int time)
{
    int n = v.size();

    if (time < n)
        return false;
    vector<int> left;
    for (int i = 0; i < n; i++)
    {
        v[i] = max(0, v[i] - (n - i));

        if (v[i] > 0)
            left.push_back(v[i]);
    }

    v = left;

    if (v.size() == 0)
        return true;

    int leftTime = time - n;

    int extra = 0;
    for (int i = 0; i < v.size(); i++)
    {
        v[i] -= leftTime;

        if (v[i] > 0)
        {
            extra += v[i];
        }
    }

    if (extra > leftTime)
        return false;

    return true;
}

void program()
{
    int n;
    cin >> n;
    vector<int> v;
    getV(n, v);
    v.push_back(1);

    sort(v.rbegin(), v.rend());

    int left = 1;
    int right = n;
    int ans = 0;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (infacted(v, mid))
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << ans << endl;
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