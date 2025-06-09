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

    int mni = 0;
    int mxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] <= arr[mni])
        {
            mni = i;
        }

        if (arr[i] >= arr[mxi])
        {
            mxi = i;
        }
    }

    if (mni > mxi)
    {
        cout << -1 << endl;
        return;
    }

    cout << n - 2 << endl;
    while (n > 2)
    {
        if (n & 1)
        {
            cout << 1 << " " << n << endl;
        }
        else
        {
            cout << 1 << " " << n - 1 << endl;
        }
        n--;
    }
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