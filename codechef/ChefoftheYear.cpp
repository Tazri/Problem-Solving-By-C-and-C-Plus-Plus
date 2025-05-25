// link : https://www.codechef.com/problems/CVOTE
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
    map<string, string> chefToCountry;
    map<string, int> countryMp;
    map<string, int> chef;

    for (int i = 0; i < n; i++)
    {
        string name, country;
        cin >> name >> country;
        chefToCountry[name] = country;
    }

    int countryMax = 0;
    int chefMax = 0;

    for (int i = 0; i < m; i++)
    {
        string name;
        cin >> name;
        chef[name]++;
        string country = chefToCountry[name];
        countryMp[country]++;

        chefMax = max(chefMax, chef[name]);
        countryMax = max(countryMax, countryMp[country]);
    }

    for (pair<string, int> p : countryMp)
    {
        if (p.second == countryMax)
        {
            cout << p.first << endl;
            break;
        }
    }

    for (pair<string, int> p : chef)
    {
        if (p.second == chefMax)
        {
            cout << p.first << endl;
            break;
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}