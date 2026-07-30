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
    vector<int> a(n + 1);
    vector<int> b(n + 1);

    int ajij = 0;
    int mai = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        ajij ^= a[i];
    }

    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
        mai ^= b[i];
    }

    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            int prev = ajij;
            int swapxr = ajij ^ a[i] ^ b[i];

            if (ajij > mai)
                continue;
            ajij ^= a[i];
            mai ^= b[i];
            swap(a[i], b[i]);
            ajij ^= a[i];
            mai ^= b[i];
            continue;
        }

        int prev = mai;
        int swapxr = mai ^ b[i] ^ a[i];
        if (mai > ajij)
            continue;
        ajij ^= a[i];
        mai ^= b[i];
        swap(a[i], b[i]);
        ajij ^= a[i];
        mai ^= b[i];
    }

    if (ajij > mai)
        cout << "Ajisai" << endl;
    else if (mai > ajij)
        cout << "Mai" << endl;
    else
        cout << "Tie" << endl;
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