// link : https://cses.fi/problemset/task/1619
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

bool comperator(int left, int right)
{
    int l = left < 0 ? left * -1 : left;
    int r = right < 0 ? right * -1 : right;

    if (l == r)
        return left < right;

    return l < r;
}

void program()
{
    int n;
    cin >> n;
    vector<int> arr;
    arr.reserve(2 * n);

    while (n--)
    {
        int l, r;
        cin >> l >> r;

        arr.push_back(l);
        arr.push_back((r + 1) * -1);
    }

    sort(arr.begin(), arr.end(), comperator);

    int cnt = 0;
    int mx = 0;

    for (int ai : arr)
    {
        if (ai > 0)
            cnt++;
        else
            cnt--;

        mx = max(cnt, mx);
    }

    cout << mx << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}