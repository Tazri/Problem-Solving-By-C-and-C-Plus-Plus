// link : https://codeforces.com/problemset/problem/2061/B
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

void print(int a, int b, int c, int d)
{
    cout << a << " " << b << " " << c << " " << d << endl;
}

void program()
{
    int n;
    cin >> n;
    map<int, int> mp;
    vector<int> arr(n);
    vector<int> unique;
    vector<int> left;

    int dup = -1;
    unique.reserve(n);
    left.reserve(n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (mp.count(arr[i]) == 0)
        {
            unique.push_back(arr[i]);
        }

        mp[arr[i]]++;

        if (mp[arr[i]] % 2 == 0)
            cnt++;

        if (mp[arr[i]] >= 2)
            dup = arr[i];
    }

    if (cnt == 0)
    {
        cout << -1 << endl;
        return;
    }

    if (cnt >= 2)
    {
        for (int ui : unique)
        {
            if (mp[ui] >= 4)
            {
                print(ui, ui, ui, ui);
                return;
            }
        }

        int time = 0;
        for (int ui : unique)
        {
            if (mp[ui] >= 2)
            {
                if (time == 0)
                    cout << ui << " " << ui;
                else
                {
                    cout << " " << ui << " " << ui << endl;
                    return;
                }
                time++;
            }
        }
        return;
    }

    for (int ui : unique)
    {
        if (mp[ui] >= 2)
        {
            mp[ui] -= 2;
            if (mp[ui] >= 1)
                left.push_back(ui);
        }
        else
            left.push_back(ui);
    }

    sort(left.begin(), left.end());

    for (int i = 1; i < left.size(); i++)
    {
        int d = left[i] - left[i - 1];
        int r = d / 2;

        if (dup > r)
        {
            print(dup, dup, left[i - 1], left[i]);
            return;
        }
    }

    cout << -1 << endl;
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