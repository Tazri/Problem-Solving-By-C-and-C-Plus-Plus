#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int N = (int)(1e6);
vector<int> spf(N + 1);
vector<int> gpf(N + 1);
vector<int> ndpf(N + 1, 0);
vector<int> nod(N + 1, 0);
vector<int> sod(N + 1, 0);

void buildSpf()
{
    for (int i = 0; i <= N; i++)
        spf[i] = i;

    for (int i = 4; i <= N; i += 2)
        spf[i] = 2;

    for (int i = 3; i * i <= N; i += 2)
    {
        if (spf[i] != i)
            continue;

        for (int j = i * i; j <= N; j += (2 * i))
        {
            spf[j] = min(spf[j], i);
        }
    }
};

void buildGpf()
{
    for (int i = 0; i <= N; i++)
        gpf[i] = i;

    for (int i = 4; i <= N; i += 2)
        gpf[i] = 2;

    for (int i = 3; i <= N; i += 2)
    {
        if (gpf[i] != i)
            continue;

        for (int j = i; j <= N; j += i)
            gpf[j] = i;
    }
}

void buildNdpf()
{
    for (int i = 2; i <= N; i += 2)
        ndpf[i]++;

    for (int i = 3; i <= N; i += 2)
    {
        if (ndpf[i] != 0)
            continue;

        for (int j = i; j <= N; j += i)
            ndpf[j]++;
    }
}

void buildNod()
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j += i)
            nod[j]++;
    }
}

void buildSod()
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j += i)
            sod[j] += i;
    }
}

int cntPrime(int n)
{
    int cnt = 0;

    while (n > 1)
    {
        int p = spf[n];
        while (n % p == 0)
        {
            n /= p;
            cnt++;
        }
    }

    return cnt;
}

void precal()
{
    buildSpf();
    buildGpf();
    buildNdpf();
    buildNod();
    buildSod();
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
    {
        cout << spf[v[i]] << " " << gpf[v[i]] << " ";
        cout << ndpf[v[i]] << " ";
        cout << cntPrime(v[i]) << " ";
        cout << nod[v[i]] << " ";
        cout << sod[v[i]];
        cout << endl;
    }
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    precal();
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}