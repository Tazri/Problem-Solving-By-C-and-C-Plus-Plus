// link : https://codeforces.com/problemset/problem/368/B
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
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    vector<int> arr(n);
    vector<int> freq(n, 0);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    freq[n - 1] = 1;
    mp[arr[n - 1]] = 1;

    for (int i = n - 2; i >= 0; i--)
    {
        int ai = arr[i];

        if (mp.count(ai))
        {
            freq[i] = freq[i + 1];
        }
        else
        {
            mp[ai] = 1;
            freq[i] = freq[i + 1] + 1;
        }
    }

    while (m--)
    {
        int l;
        cin >> l;
        cout << freq[l - 1] << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}