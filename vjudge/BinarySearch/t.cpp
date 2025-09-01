// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

int main()
{
    int n;
    cin >> n;
    int arr[n][n];

    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {
            cin >> arr[r][c];
        }
    }

    int r = 1;
    int c = 3;
    int dr[] = {-1, 0, 1, 0, -1, -1, 1, 1};
    int dc[] = {0, 1, 0, -1, -1, 1, -1, 1};

    for (int di = 0; di < 8; di++)
    {
        int tr = r + dr[di];
        int tc = c + dc[di];

        if (tr >= 0 && tr < n && tc >= 0 && tc < n)
        {
            cout << arr[tr][tc] << endl;
        }
    }
    return 0;
}
