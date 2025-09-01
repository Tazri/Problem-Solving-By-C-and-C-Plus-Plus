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
    cin >> n >> x;
    vector<int> v(n);

    for (int &vi : v)
        cin >> vi;

    int cnt = 0;

    int l = 0;
    int r = 0;
    int sum = 0;
    while (r < n)
    {
        sum += v[r];

        if (sum < x)
        {
            r++;
            continue;
        }

        while (sum >= x)
        {
            if (sum == x)
                cnt++;
            sum -= v[l];
            l++;
        }
        r++;
    }

    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}