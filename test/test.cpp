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
    vector<ll> v = {0};
    ll size = 1e5;
    ll initialDataAddress = (ll)v.data();
    ll cnt = 0;

    cout << "vector address: " << ((ll)(&v)) << endl;
    cout << "current data address : " << initialDataAddress << endl;
    cout << "current data address by array index : " << (ll)(&v[0]) << endl;

    ll previousDataAddress = (ll)v.data();

    cout << "start pushing..........." << endl;
    for (int i = 1; i <= size; i++)
    {
        v.push_back(0);

        ll newDataAddress = (ll)v.data();

        if (newDataAddress != previousDataAddress)
        {
            cnt++;
            cout << "\n!!changed detected !!" << endl;
            cout << "i : " << i << endl;
            cout << "change cnt : " << cnt << endl;
            cout << "prevous data address : " << previousDataAddress << endl;
            cout << "new data address : " << newDataAddress << endl;

            previousDataAddress = newDataAddress;
        }
    }

    cout << "finish pushing" << endl;
    cout << "\n===========" << endl;
    cout << "initial data address : " << initialDataAddress << endl;
    cout << "current data address : " << previousDataAddress << endl;
    cout << "total change : " << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}