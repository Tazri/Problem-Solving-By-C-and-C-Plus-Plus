// link  : https://codeforces.com/contest/2060/problem/C
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

void test()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n + 1, 0);

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        int need = k - num;

        if (need > n || need <= 0)
        {
            arr[num]++;
            continue;
        }

        if (arr[need] > 0)
        {
            arr[need]--;
            ans++;
        }
        else
        {
            arr[num]++;
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
        test();
    return 0;
}