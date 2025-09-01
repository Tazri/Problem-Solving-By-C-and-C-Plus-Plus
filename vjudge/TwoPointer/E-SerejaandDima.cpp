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

    int l = 0;
    int r = n - 1;
    int ser = 0;
    int dim = 0;
    bool isSerTurn = true;
    while (l <= r)
    {
        if (isSerTurn)
        {
            if (v[l] > v[r])
                ser += v[l++];
            else
                ser += v[r--];
        }
        else
        {
            if (v[l] > v[r])
                dim += v[l++];
            else
                dim += v[r--];
        }

        isSerTurn = !isSerTurn;
    }

    cout << ser << " " << dim << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}