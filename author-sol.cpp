#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	ll n, s;
	cin >> n >> s;
	ll pos=((n*(n+1))/2)-s;
	if(pos>=1&&pos<=n)
		cout << pos;
	else
		cout << -1;
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
		
	int t;
	cin >> t;
	while(t--)
		solve();
}
