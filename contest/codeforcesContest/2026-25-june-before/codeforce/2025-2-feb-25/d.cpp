#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

void program()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int l = 1;
    int r = 1;
    int mxInv = 0;

    for (int i = 1; i <= n; i++)
    {
        int inv = 0;

        for (int j = i; j <= n; j++)
        {
            if (arr[j] > arr[i])
            {
                inv--;
            }
            else if (arr[i] > arr[j])
            {
                inv++;
            }

            if (mxInv < inv)
            {
                mxInv = inv;
                l = i;
                r = j;
            }
        }
    }

    cout << l << " " << r << endl;
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

/*
3
2 3 1
ans : 2 1
*/
