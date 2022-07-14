#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long LL;

void solve()
{
    int n;
    cin >> n;
    string arr[n];
    set<string> ss;

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        ss.insert(arr[i]);
    }

    for (int i = 0; i < n; ++i)
    {
        bool found = false;
        for (int j = 0; j < arr[i].size(); ++j)
        {
            string s1 = arr[i].substr(0, j);
            string s2 = arr[i].substr(j);
            if (ss.count(s1) != 0 && ss.count(s2) != 0)
            {
                found = true;
                break;
            }
        }
        cout << found;
    }
    cout << endl;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
