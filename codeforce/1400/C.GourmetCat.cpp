// link : https://codeforces.com/problemset/problem/1154/C
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
    int a, b, c;
    cin >> a >> b >> c;

    int mn = a / 3;
    mn = min(mn, b / 2);
    mn = min(mn, c / 2);

    int days = mn * 7;

    a -= (3 * mn);
    b -= (2 * mn);
    c -= (2 * mn);

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

    int mx = 0;
    for (int i = 0; i < 7; i++)
    {
        int k = 0;
        int ca = a;
        int cb = b;
        int cc = c;

        for (int ai : arr)
        {
            if (ai == 2 || ai == 3 || ai == 6)
            {
                if (ca <= 0)
                    break;
                k++;
                ca--;
            }
            else if (ai == 1 || ai == 4)
            {
                if (cb <= 0)
                    break;
                k++;
                cb--;
            }
            else
            {
                if (cc <= 0)
                    break;
                k++;
                cc--;
            }
        }

        int f = arr[0];
        arr.erase(arr.begin());
        arr.push_back(f);

        mx = max(mx, k);
    }

    cout << days + mx << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}