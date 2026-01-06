// link : https://codeforces.com/problemset/problem/545/D
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

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int sum = 0;
    int cnt = 0;
    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cnt++;
            sum += v[i];
            continue;
        }
        if (sum > v[i])
            continue;

        sum += v[i];
        cnt++;
    }

    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}