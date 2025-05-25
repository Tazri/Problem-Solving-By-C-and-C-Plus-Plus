// link : https://codeforces.com/problemset/problem/2027/B
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

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int mn = n - 1;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 1; j < n; j++)
        {
            if (arr[j] > arr[i])
                cnt++;
        }

        cnt += i;

        mn = min(mn, cnt);
    }

    cout << mn << endl;
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