// link : #7808. Missing Vowels
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

#define NO "Different"
#define YES "Same"

bool isV(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y';
}

void parse(vector<string> &pv, string &s)
{
    for (char ch : s)
    {
        if (pv.empty())
        {
            pv.push_back("");
            pv.back().push_back(ch);
            continue;
        }

        if (isV(ch))
        {
            if (isV(pv.back()[0]))
                pv.back().push_back(ch);
            else
            {
                string tmp = "";
                tmp.push_back(ch);
                pv.push_back(tmp);
            }
        }
        else
        {
            if (isV(pv.back()[0]))
            {
                string tmp = "";
                tmp.push_back(ch);
                pv.push_back(tmp);
            }
            else
                pv.back().push_back(ch);
        }
    }
}

bool partiallyEqual(string a, string b)
{
    if (a.size() > b.size())
        return false;

    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return false;
    return true;
}

void program()
{
    string srt, fl;
    cin >> srt;
    cin >> fl;

    for (int i = 0; i < srt.size(); i++)
        srt[i] = tolower(srt[i]);
    for (int i = 0; i < fl.size(); i++)
        fl[i] = tolower(fl[i]);

    int fi = 0;
    for (int i = 0; i < srt.size(); i++)
    {
        if (fi >= fl.size())
        {
            cout << NO << endl;
            return;
        }

        if (srt[i] == fl[fi])
        {
            fi++;
            continue;
        }

        while (fi < fl.size() && fl[fi] != srt[i])
        {
            if (isV(fl[fi]))
            {
                fi++;
                continue;
            }
            cout << NO << endl;
            return;
        }

        if (fi >= fl.size())
        {
            cout << NO << endl;
            return;
        }
        fi++;
    }

    while (fi < fl.size())
    {
        if (isV(fl[fi]) == false)
        {
            cout << NO << endl;
            return;
        }
        fi++;
    }

    cout << YES << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}