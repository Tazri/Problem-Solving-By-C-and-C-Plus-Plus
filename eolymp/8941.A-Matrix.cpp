// link : https://basecamp.eolymp.com/en/problems/8941
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
    int n, m;
    cin >> n >> m;

    int ni = 1;
    for (int i = 0; i < n; i++)
    {
        cout << ni++;

        for (int i = 1; i < m; i++)
            cout << " " << ni++;
        cout << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}