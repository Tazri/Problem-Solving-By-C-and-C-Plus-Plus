#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int fy(int y)
{
    int cnt = y / 4;
    cnt -= y / 100;
    cnt += y / 400;

    return cnt;
}

int monthConvert(string month)
{
    vector<string> months = {
        "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    for (int i = 0; i < months.size(); i++)
    {
        if (months[i] == month)
            return i;
    }

    return -1;
}

int convertDay(string sday)
{
    if (!sday.empty() && sday.back() == ',')
        sday.pop_back();

    stringstream ss(sday);
    int day;
    ss >> day;
    return day;
}

vector<int> convert(string s)
{
    stringstream ss(s);
    string month, day;
    int year;

    ss >> month >> day;
    ss >> year;
    int m = monthConvert(month);
    int d = convertDay(day);

    return {m, d, year};
}

void _DIBBA(int _DIBBA_NO)
{
    cout << "Case " << _DIBBA_NO << ": ";
    string start, end;
    getline(cin, start);
    getline(cin, end);

    vector<int> st = convert(start);
    int startMonth = st[0];
    int startDay = st[1];
    int startYear = st[2];

    vector<int> en = convert(end);
    int endMonth = en[0];
    int endDay = en[1];
    int endYear = en[2];

    if (startMonth == 0 || (startMonth == 1 && startDay <= 29))
        startYear--;

    if (endMonth == 0 || (endMonth == 1 && endDay < 29))
        endYear--;

    int total = fy(endYear) - fy(startYear);

    cout << total << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}