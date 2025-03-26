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
    vector<int> arr(n);
    int p = 0;
    int ne = 0;
    int z = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] < 0)
            ne++;
        else if (arr[i] > 0)
            p++;
        else
            z++;
    }

    if (z)
    {
        cout << 0 << endl;
        return;
    }

    if (ne & 1)
    {
        cout << 0 << endl;
        return;
    }
    cout << 1 << endl;
    cout << 1 << " " << 0 << endl;
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