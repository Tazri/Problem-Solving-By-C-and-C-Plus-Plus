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
    vector<int> v(n + 2);
    vector<int> lv(n + 2);
    vector<int> rv(n + 2);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        v[i] %= 3;
    }

    for (int i = 1; i <= n; i++)
        lv[i] = lv[i - 1] + v[i];

    for (int i = n; i >= 0; i--)
        rv[i] = rv[i + 1] + v[i];

    int sum = rv[1];

    for (int l = 1; l <= n; l++)
    {
        for (int r = l + 1; r < n; r++)
        {
            int s1 = lv[l];
            int s2 = rv[r];
            int s3 = sum - s1 - s2;

            s1 %= 3;
            s2 %= 3;
            s3 %= 3;

            if (s1 == s2 && s2 == s3)
            {
                cout << l << " " << r << endl;
                return;
            }

            if (s1 != s2 && s1 != s3 && s2 != s3)
            {
                cout << l << " " << r << endl;
                return;
            }
        }
    }

    cout << "0 0" << endl;
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