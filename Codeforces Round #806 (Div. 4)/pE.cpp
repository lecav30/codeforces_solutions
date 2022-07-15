#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long LL;

void solve()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; ++i)
        cin >> s[i];

    int arr[n][n];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            arr[i][j] = s[i][j] - '0';

    int cpArr[n][n], swaps[n][n];

    // for (int i = 0; i < n; ++i)
    // {
    //     for (int j = 0; j < n; ++j)
    //         cout << cpArr[i][j] << " ";
    //     cout << endl;
    // }
    // cout << endl;

    for (int i = 0; i < 3; ++i)
    {
        // rotate array 90 degrees clockwise
        for (int j = 0; j < n; ++j)
        {
            int t = n - 1;
            for (int k = 0; k < n; ++k)
            {
                cpArr[j][k] = arr[t][j];
                t--;
            }
        }

        for (int j = 0; j < n; ++j)
            for (int k = 0; k < n; ++k)
                if (arr[j][k] == cpArr[j][k])
                    swaps[j][k] = 1;
                else
                    swaps[j][k] = 0;
    }

    int c = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (swaps[i][j] == 1)
                c++;

    cout << c << endl;
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
