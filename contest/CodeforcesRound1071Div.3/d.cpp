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

long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int countFirst1(int n)
{
    int cnt = 0;
    while (n)
    {
        if (n & 1)
        {
            cnt++;
            n >>= 1;
            continue;
        }
        break;
    }

    return cnt;
}

bool isAllOne(int n)
{
    while (n)
    {
        if (n & 1)
            n >>= 1;
        else
            return false;
    }
    return true;
}

void program()
{
    int n;
    cin >> n;
    int up = binpow(2, n) - 1;
    int lim = __popcount(up) - 1;
    vector<int> v;

    for (int i = 0; i <= up; i++)
        v.push_back(i);

    sort(v.begin(), v.end(), [](int a, int b)
         {
            
        int acnt = countFirst1(a);
        int bcnt = countFirst1(b);

        if(acnt != bcnt){
            return acnt > bcnt;
        } 
        return a < b; });

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " \n"[i == v.size() - 1];
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