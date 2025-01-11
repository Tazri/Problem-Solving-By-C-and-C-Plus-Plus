// link : https: // codeforces.com/problemset/problem/158/A
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

int main()
{
    optimize();
    int n, k;
    cin >> n >> k;

    vector<int> places;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a)
            places.push_back(a);
    }

    if (k >= places.size())
    {
        cout << places.size() << endl;
        return 0;
    }

    if (!places.size())
    {
        cout << 0 << endl;
        return 0;
    }

    int next = k;
    for (int i = k; i < places.size(); i++)
    {

        if (places[k - 1] == places[i])
            next++;
        else
            break;
    }

    cout << next << endl;
    return 0;
}