// link : https://basecamp.eolymp.com/en/problems/2322
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
    int n, x;
    cin >> x;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    for (int j = 0; j < n; j++)
    {
        bool isOk = false;

        for (int i = 0; i < n; i++)
            if (arr[i][j] == x)
            {
                isOk = true;
                break;
            }

        if (isOk)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}