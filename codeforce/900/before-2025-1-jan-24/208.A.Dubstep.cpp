// link : https://codeforces.com/problemset/problem/208/A
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

vector<string> splitStringByWord(string s, string d)
{
    vector<string> result;
    size_t start = 0, end;

    while ((end = s.find(d, start)) != string::npos)
    {
        result.push_back(s.substr(start, end - start));
        start = end + d.length();
    }

    result.push_back(s.substr(start));
    return result;
}

string joinStrngByWord(vector<string> strArr, string d)
{
    string res = "";
    if (strArr.size() <= 0)
    {
        return "";
    }

    if (strArr.size() == 1)
    {
        return strArr[0];
    }

    res += strArr[0];

    for (int i = 1; i < strArr.size(); i++)
    {
        res += d + strArr[i];
    }

    return res;
}

int main()
{
    optimize();
    string s;
    cin >> s;
    vector<string> splitArr = splitStringByWord(s, "WUB");
    vector<string> filter;

    for (string word : splitArr)
    {
        if (word.size())
        {
            filter.push_back(word);
        }
    }

    string res = joinStrngByWord(filter, " ");
    cout << res << endl;
    return 0;
}