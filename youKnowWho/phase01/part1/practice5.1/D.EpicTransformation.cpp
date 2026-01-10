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
    vector<int> v;
    v.reserve(n);
    vector<int> arr;
    arr.reserve(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;

        if (mp.count(vi))
            mp[vi]++;
        else
        {
            mp[vi]++;
            v.push_back(vi);
        }
    }

    sort(v.begin(), v.end(), [&mp](int a, int b)
         { return mp[a] < mp[b]; });

    int gone = 0;

    for (int i = 0; i < v.size(); i++)
    {
        int freq = mp[v[i]];

        int time = freq - gone;

        for (int k = 0; k < time; k++)
            for (int j = i; j < v.size(); j++)
                arr.push_back(v[j]);

        gone += time;
    }

    int ans = n;
    for (int &ai : arr)
        cout << ai << " ";
    cout << endl;

    for (int i = 1; i < arr.size(); i += 2)
        if (arr[i] != arr[i - 1])
            ans -= 2;
        else
            break;

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}