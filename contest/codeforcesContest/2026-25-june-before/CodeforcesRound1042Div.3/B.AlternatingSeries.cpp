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

void pv(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
        cout << arr[i] << " \n"[i == n - 1];
}

void program()
{
    vector<int> a = {1, 2};
    vector<int> b = {9};

    a.swap(b);
    pv(a);
    pv(b);
}

int main()
{
    optimize();
    program();
    return 0;
}