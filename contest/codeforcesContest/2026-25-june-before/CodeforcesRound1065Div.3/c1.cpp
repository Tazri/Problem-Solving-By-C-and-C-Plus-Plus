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
        if (a[i])
            ajij++;
    }

    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];

        if (b[i])
            mai++;
    }

    if (ajij % 2 == 1 && mai % 2 == 1)
    {
        cout << "Tie" << endl;
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (a[i] == b[i])
            continue;

        if (i & 1)
        {
            if (ajij % 2 == 0)
            {
                swap(a[i], b[i]);
                ajij++;
                mai++;
            }
            continue;
        }

        if (i % 2 == 0)
        {
            if (mai % 2 == 0)
            {
                swap(a[i], b[i]);
                ajij++;
                mai++;
            }
        }
    }

    ajij = ajij & 1;
    mai = mai & 1;

    if (ajij < mai)
    {
        cout << "Mai" << endl;
    }
    else if (mai < ajij)
    {
        cout << "Ajisai" << endl;
    }
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