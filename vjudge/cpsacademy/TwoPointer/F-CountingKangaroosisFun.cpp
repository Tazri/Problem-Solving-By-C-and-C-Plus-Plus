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
    vector<int> v(n);
    for (int &vi : v)
        cin >> vi;

    sort(v.begin(), v.end());

    int mid = n & 1 ? (n / 2) + 2 : (n / 2) + 1;
    int r = mid - 1;
    int l = 0;
    int cnt = 0;
    while (r < n)
    {
        if (v[l] * 2 <= v[r])
        {
            l++;
            r++;
            cnt++;
            continue;
        }
        r++;
    }

    cout << n - cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}