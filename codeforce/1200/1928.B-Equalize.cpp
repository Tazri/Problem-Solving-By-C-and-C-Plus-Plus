// link : https://codeforces.com/problemset/problem/1928/B
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

int lb(vector<int> &arr, int k)
{
    return lower_bound(arr.begin(), arr.end(), k) - arr.begin();
}

void program()
{
    int n;
    cin >> n;
    vector<int> arr;
    set<int> st;
    arr.reserve(n);

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        if (st.count(ai))
            continue;
        arr.push_back(ai);
        st.insert(ai);
    }

    if (arr.size() == 1)
    {
        cout << 1 << endl;
        return;
    }

    sort(arr.begin(), arr.end());

    // for (int i = 0; i < arr.size(); i++)
    //     cout << arr[i] << " ";
    // cout << endl;

    int rm = 0;
    int mx = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int ai = arr[i];
        int k = ai + n;
        int l = lb(arr, k);
        int cnt = l;
        cnt -= rm;
        rm++;
        mx = max(mx, cnt);
    }

    cout << mx << endl;
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