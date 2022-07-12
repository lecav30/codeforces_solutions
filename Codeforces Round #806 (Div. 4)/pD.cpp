#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long LL;

void solve()
{
	int n;
	cin >> n;
	string arr[n];

	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	int arb[n];
	for (int i = 0; i < n; ++i)
		arb[i] = 0;

	vector<string> vs;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			vs.push_back(arr[i] + arr[j]);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < vs.size(); ++j)
		{
			if (arr[i] == vs[j])
			{
				arb[i] = 1;
				break;
			}
		}
	}

	for (int i = 0; i < n; ++i)
		cout << arb[i];
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
