// link : https://acm.hdu.edu.cn/showproblem.php?pid=5427
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

void getNameYear(string &name, int &year)
{
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<string> v;
    string word;
    while (ss >> word)
        v.push_back(word);

    string syear = v.back();
    v.pop_back();
    year = stoi(syear);
    name = "";
    for (int i = 0; i < v.size(); i++)
    {
        if (i == 0)
            name += v[i];
        else
            name += (" " + v[i]);
    }
}

void program()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> names(2020, "");

    for (int i = 0; i < n; i++)
    {
        string name;
        int year;
        getNameYear(name, year);
        names[year] = name;
    }

    for (int i = 2015; i >= 1900; i--)
        if (names[i].size())
            cout << names[i] << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
        program();
    return 0;
}