#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long LL;

void solve()
{
    int x;
    cin >> x;
    int arr[3];
    for (int i = 0; i < 3; ++i)
    {
        cin >> arr[i];
    }

    bool ok = true;
    for (int i = 0; i < 3; ++i)
    {
        if (x == 0)
        {
            int sum = 0;
            for (int j = 0; j < 3; ++j)
            {
                sum += arr[j];
            }
            if (sum > 0)
            {
                ok = false;
                break;
            }
        }
        else
        {
            int newKey = arr[x - 1];
            arr[x - 1] = 0;
            x = newKey;
        }
    }
    cout << (ok ? "YES" : "NO") << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
