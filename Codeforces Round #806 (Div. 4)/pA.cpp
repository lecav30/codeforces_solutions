#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long LL;

void solve()
{
	string s;
	cin >> s;
	for (auto &c : s)
		c = tolower(c);
	if (s == "yes")
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
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
