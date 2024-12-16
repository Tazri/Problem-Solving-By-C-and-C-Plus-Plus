// link : https://codeforces.com/problemset/problem/2042/A
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

void printVec(vector<int> a)
{
    cout << "[";
    for (int i = 0; i < a.size(); i++)
    {
        cout << " " << a[i] << " ";
    }

    cout << "]" << endl;
}

void test()
{
    int n, k;
    cin >> n >> k;

    vector<int> chest(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> chest[i];
    }

    // sort the chest
    sort(chest.begin(), chest.end(), [](int a, int b)
         { return a > b; });

    int take = 0;

    for (int a : chest)
    {
        if (take + a <= k)
        {
            take += a;
        }
        else
        {
            break;
        }
    }

    int add = k - take;
    cout << add << endl;
}

int main()
{
    optimize();

    int t;

    cin >> t;

    while (t--)
    {
        test();
    }
    return 0;
}
