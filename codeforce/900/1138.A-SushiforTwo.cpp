// link : https://codeforces.com/problemset/problem/1138/A
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
    vector<int> arr(n);
    vector<int> cnt;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int len = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            len++;
        else
        {
            cnt.push_back(len);
            len = 1;
        }
    }
    cnt.push_back(len);
    int mx = 2;
    for (int i = 1; i < cnt.size(); i++)
    {
        int mn = min(cnt[i], cnt[i - 1]);
        mx = max(mx, mn * 2);
    }

    cout << mx << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}