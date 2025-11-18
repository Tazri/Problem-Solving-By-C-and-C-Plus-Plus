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
    ll n;
    cin >> n;
    vector<ll> even;
    even.reserve(n);
    vector<ll> odd;
    odd.reserve(n);

    for (ll i = 0; i < n; i++)
    {
        ll ai;
        cin >> ai;

        if (ai & 1)
            odd.push_back(ai);
        else
            even.push_back(ai);
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    bool isAlice = true;

    ll alice = 0;
    ll bob = 0;
    while (even.size() || odd.size())
    {
        // cout << "e : " << even.size() << " o :  " << odd.size() << endl;
        if (isAlice)
        {
            if (even.empty())
                odd.pop_back();
            else if (odd.empty())
            {
                alice += even.back();
                even.pop_back();
            }
            else
            {
                if (odd.back() > even.back())
                {
                    odd.pop_back();
                }
                else
                {
                    alice += even.back();
                    even.pop_back();
                }
            }
            isAlice = !isAlice;
            continue;
        }

        if (odd.empty())
            even.pop_back();
        else if (even.empty())
        {
            bob += odd.back();
            odd.pop_back();
        }
        else
        {
            if (even.back() > odd.back())
                even.pop_back();
            else
            {
                bob += odd.back();
                odd.pop_back();
            }
        }

        isAlice = !isAlice;
    }

    // cout << "even : " << even.size() << " odd : " << odd.size() << endl;

    if (alice > bob)
    {
        cout << "Alice" << endl;
    }
    else if (bob > alice)
    {
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Tie" << endl;
    }
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        program();
    return 0;
}