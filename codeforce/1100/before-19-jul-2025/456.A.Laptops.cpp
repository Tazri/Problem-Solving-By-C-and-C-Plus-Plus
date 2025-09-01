// link : https://codeforces.com/problemset/problem/456/A
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
    vector<int> p(n);
    vector<int> q(n);
    vector<int> l(n);

    for (int i = 0; i < n; i++)
    {
        l[i] = i;
        cin >> p[i] >> q[i];
    }

    sort(l.begin(), l.end(), [&p, &q](int a, int b)
         {
        if(p[a] == p[b]){
            return q[a] < q[b];        
        }
        return p[a] < p[b]; });

    for (int i = 1; i < n; i++)
    {
        int prev = l[i - 1];
        int curr = l[i];

        if (q[prev] > q[curr])
        {
            cout << "Happy Alex" << endl;
            return;
        }
    }

    cout << "Poor Alex" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}