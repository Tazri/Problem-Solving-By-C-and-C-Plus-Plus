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
    ifstream fin("outofplace.in");
    int n;
    fin >> n;
    vector<int> arr(n);
    vector<int> sarr(n);

    for (int i = 0; i < n; i++)
    {
        fin >> arr[i];
        sarr[i] = arr[i];
    }

    sort(sarr.begin(), sarr.end());

    int d = 0;

    for (int i = 0; i < n; i++)
        if (sarr[i] != arr[i])
            d++;

    ofstream fout("outofplace.out");
    fout << d - 1 << endl;

    fin.close();
    fout.close();
}

int main()
{
    optimize();
    program();
    return 0;
}