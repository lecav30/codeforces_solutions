#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long LL;

void rotate90(vector<vector<int>> &vecRot)
{
    vector<vector<int>> vecOrig = vecRot;
    // rotate array 90 degrees clockwise
    for (int i = 0; i < vecOrig.size(); ++i)
    {
        int t = vecOrig.size() - 1;
        for (int j = 0; j < vecOrig.size(); ++j)
        {
            vecRot[i][j] = vecOrig[t][i];
            t--;
        }
    }
}

void printMatrix(vector<vector<int>> vec)
{
    for (int i = 0; i < vec.size(); ++i)
    {
        for (int j = 0; j < vec.size(); ++j)
            cout << vec[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

void solve()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; ++i)
        cin >> s[i];

    vector<vector<int>> g(n, vector<int>(n));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            g[i][j] = (s[i][j] - '0');

    vector<vector<int>> g2 = g;
    rotate90(g2);

    vector<vector<int>> g3 = g2;
    rotate90(g3);

    vector<vector<int>> g4 = g3;
    rotate90(g4);

    int ans = 0;

    for (int i = 0; i < n; ++i)
    {
        int cntOne = 0, cntZero = 0;
        for (int j = 0; j < n; ++j)
        {
            cntOne += (g[i][j] == 1);
            cntOne += (g2[i][j] == 1);
            cntOne += (g3[i][j] == 1);
            cntOne += (g4[i][j] == 1);

            cntZero += (g[i][j] == 0);
            cntZero += (g2[i][j] == 0);
            cntZero += (g3[i][j] == 0);
            cntZero += (g4[i][j] == 0);

            ans += min(cntOne, cntZero);

            cntOne = cntZero = 0;
        }
    }

    cout << ans / 4 << endl;
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
