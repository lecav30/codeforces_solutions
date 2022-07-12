#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long LL;

void solve()
{
	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	vector<pair<int, int>> vp;

	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (arr[i] < (i + 1) && (i + 1) < arr[j] && arr[j] < (j + 1))
				vp.push_back({arr[i], arr[j]});
		}
	}
	cout << vp.size() << endl;
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
