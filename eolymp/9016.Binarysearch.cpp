// link : https://basecamp.eolymp.com/en/problems/9016
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
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    while (q--)
    {
        int x;
        cin >> x;

        int l = 0;
        int r = n - 1;
        bool isFound = false;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (arr[mid] == x)
            {
                isFound = true;
                break;
            }

            if (x < arr[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }

        isFound ? cout << "YES" << endl : cout << "NO" << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}