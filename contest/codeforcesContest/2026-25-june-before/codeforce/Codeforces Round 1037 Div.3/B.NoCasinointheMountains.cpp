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
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int &ai : arr)
        cin >> ai;

    int ans = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cnt++;
            if (cnt >= k)
            {
                ans++;
                cnt = 0;
                if (i < n - 1)
                    arr[i + 1] = 1;
            }
            continue;
        }

        cnt = 0;
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