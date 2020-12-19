#include <algorithm>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

#define EL printf("\n")
#define Fill(a, x) memset(a, x, sizeof a)
#define fill(a, x) fill(a.begin(), a.end(), x)
#define sort(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
#define pb push_back
#define mt make_tuple
#define fi first
#define se second
#define MOD 1000000007LL
#define INF 1e9
#define LINF 1e18
#define ld long double
#define ll long long
#define ull unsigned long long
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;
typedef vector<string> vs;


int main() {
	int t;
	vi v;
	int n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		v.resize(n);
		bool tt = 0;
		for (int i = 0; i < n; ++i)
			cin >> v[i];
		for (int i = 0; i < n; ++i)
			if (k == v[i]) {
				tt = 1;
				cout << i + 1;
				break;
			}
		if (!tt)
			cout << -1;
		cout << endl;
	}
	return 0;
}