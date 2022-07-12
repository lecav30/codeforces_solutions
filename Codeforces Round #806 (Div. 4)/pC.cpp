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
	// for (int i = 0; i < n; ++i)
	// 	cout << arr[i];
	for (int i = 0; i < n; ++i)
	{
		int m;
		string up;
		cin >> m >> up;
		for (int j = 0; j < m; ++j)
		{
			char c = up[j];
			if (c == 'D')
			{
				arr[i]++;
				if (arr[i] > 9)
					arr[i] = 0;
			}
			else
			{
				arr[i]--;
				if (arr[i] < 0)
					arr[i] = 9;
			}
		}
	}
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
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
