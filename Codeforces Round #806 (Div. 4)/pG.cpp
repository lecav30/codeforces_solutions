#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long LL;

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];

    LL total = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        total += arr[i];
    }

    LL coins = 0;

    /* auto reduce = [&] (int i) -> void { */
    /* }; */

    /* for (int i = 0; i < n; ++i) */
    /* { */
    /*     // bad key */
    /*     if (total <= k) */
    /*     { */
    /*         bool minusOne = false; */
    /*         if (total % 2 == 0) */
    /*             minusOne = true; */
    /*         total /= 2; */
    /*         if (minusOne) */
    /*             total--; */
    /*         arr[i] /= 2; */
    /*         coins += arr[i]; */
    /*         total -= arr[i]; */
    /*     } */
    /*     else { */
    /*         // good key */
    /*         if (arr[i] >= k) */
    /*         { */
    /*             LL tempTotal = total; */
    /*             bool minusOne = false; */
    /*             if (tempTotal % 2 == 0) */
    /*                 minusOne = true; */
    /*             tempTotal /= 2; */
    /*             if (minusOne) */
    /*                 tempTotal--; */
    /*             if (arr[i] - k >= tempTotal / 2) */
    /*             { */
    /*                 coins -= k; */
    /*                 coins += arr[i]; */
    /*                 total -= arr[i]; */
    /*             } */
    /*             else { */
    /*                 bool minusOne = false; */
    /*                 if (total % 2 == 0) */
    /*                     minusOne = true; */
    /*                 total /= 2; */
    /*                 if (minusOne) */
    /*                     total--; */
    /*                 arr[i] /= 2; */
    /*                 coins += arr[i]; */
    /*                 total -= arr[i]; */
    /*             } */
    /*         } */
    /*         else  */
    /*         { */
    /*             // good key */
    /*             if (total >= k * (n - i)) */
    /*             { */
    /*                 coins -= k; */
    /*                 coins += arr[i]; */
    /*                 total -= arr[i]; */
    /*             } */
    /*             // bad key */
    /*             else  */
    /*             { */
    /*                 total /= 2; */
    /*                 if (total % 2 == 0) */
    /*                     total--; */
    /*                 arr[i] /= 2; */
    /*                 coins += arr[i]; */
    /*                 total -= arr[i]; */
    /*             } */
    /*         } */
    /*     } */
    /*     /* cout << coins << endl; */ */
    /* } */

    for (int i = 0; i < n; ++i)
    {
        bool gk = false;
        if (gk) {
            coins -= k;
            coins += arr[i];
            total -= arr[i];
        }
        else 
        {
            bool minusOne = false;
            if (total % 2 == 0)
                minusOne = true;
            total /= 2;
            if (minusOne)
                total--;
            arr[i] /= 2;
            coins += arr[i];
            total -= arr[i];
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
