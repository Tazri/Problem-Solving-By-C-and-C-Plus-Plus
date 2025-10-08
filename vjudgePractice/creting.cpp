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

// void deg(vector<int> v, int n)
// {
//     int sum = 0;

//     for (int i = 0; i < v.size(); i++)
//     {
//         for (int j = i + 1; j < v.size(); j++)
//         {
//             int d = abs(v[i] - v[j]);
//             sum += gcd(d, n);
//         }
//     }
//     cout << sum << endl;
// }

void program()
{
    int n, k;
    cin >> n >> k;
    int take = n - k;
    vector<int> v;
    int s = 1;

    for (int i = 1; i <= k; i++)
        cout << i << " \n"[i == k];
}

int main()
{
    optimize();
    program();
    return 0;
}