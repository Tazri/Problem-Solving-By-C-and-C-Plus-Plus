#include <bits/stdc++.h>

using namespace std;
// TODO
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

bool isStartWith(string s1, string s2)
{
    string base;
    string dist;
    if (s1.size() > s2.size())
    {
        base = s1;
        dist = s2;
    }
    else
    {
        base = s2;
        dist = s1;
    }

    for (int i = 0; i < dist.size(); i++)
    {
        if (base[i] != dist[i])
        {
            return false;
        }
    }

    return true;
}

bool isEndWith(string s1, string s2)
{
    string base;
    string dist;
    if (s1.size() > s2.size())
    {
        base = s1;
        dist = s2;
    }
    else
    {
        base = s2;
        dist = s1;
    }

    for (int i = dist.size() - 1, j = base.size() - 1; i >= 0; i--, j--)
    {
        if (base[j] != dist[i])
        {
            return false;
        }
    }

    return true;
}

void program()
{
    string prefix = "";
    string suffix = "";
    int n;
    cin >> n;
    vector<string> words(2 * n - 2);
    vector<int> prefixIndex;
    vector<int> suffixIndex;

    for (int i = 0; i < words.size(); i++)
    {
        cin >> words[i];
        if (prefix == "")
        {
            prefix = words[i];
            prefixIndex.push_back(i);
            continue;
        }

        // let check it comare with prefix
        bool isPrefix = isStartWith(prefix, words[i]);

        if (isPrefix)
        {
            prefix = prefix.size() > words.size() ? prefix : words[i];
            prefixIndex.push_back(i);
            continue;
        }

        // it's confirm it suffix
        suffix = suffix.size() > words[i].size() ? suffix : words[i];
        suffixIndex.push_back(i);
    }

    // constract ans
    vector<char> ans(2 * n + 2);

    for (int i : prefixIndex)
    {
        ans[i] = 'P';
    }

    for (int i : suffixIndex)
    {
        ans[i] = 'S';
    }

    // no balance it

    // print ans
    cout << "print prefix : " << endl;

    for (int i = 0; i < prefixIndex.size(); i++)
    {
        cout << words[prefixIndex[i]] << " ";
    }
    cout << endl;

    cout << "print suffix : " << endl;
    for (int i = 0; i < suffixIndex.size(); i++)
    {
        cout << words[suffixIndex[i]] << " ";
    }
    cout << endl;
    cout << "prefix : " << prefix << endl;
    cout << "suffix : " << suffix << endl;
    cout << ans[0];
    for (int i = 1; i < ans.size(); i++)
    {
        cout << ans[i];
    }
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}