#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];

    ll total = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        total += arr[i];
    }

    ll coins = 0;

    for (int i = 0; i < n; ++i)
    {
        total -= arr[i];
        cout << "total " << total << endl;
        // gk
        ll tgk = total + arr[i] - k;
        // bk
        ll tbk = total;
        bool minusOne = false;
        if (tbk % 2 == 0 && tbk != 0)
            minusOne = true;
        tbk /= 2;
        if (minusOne)
            tbk--;
        tbk += arr[i] / 2;
        // compare keys
        cout << "tgk " << tgk << " - "
             << "tbk " << tbk << endl;
        if (tgk >= tbk)
        {
            coins -= k;
            coins += arr[i];
        }
        else
        {
            coins += arr[i] /= 2;
        }
    }

    cout << coins << endl;
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
