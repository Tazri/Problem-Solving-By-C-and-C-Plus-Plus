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
    vector<int> perm(2 * n - 1);
    vector<int> arr(n);
    int pi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (i == 0)
        {
            perm[pi++] = arr[i];
            continue;
        }

        if (arr[i - 1] <= arr[i])
        {
            perm[pi++] = arr[i];
        }
        else
        {
            perm[pi++] = arr[i];
            perm[pi++] = arr[i];
        }
    }

    cout << pi << endl;
    cout << perm[0];
    for (int i = 1; i <= pi - 1; i++)
    {
        cout << " " << perm[i];
    }
    cout << endl;
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