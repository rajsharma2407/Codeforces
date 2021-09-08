#include<bits/stdc++.h>
#define ll long long
#define M 1000000007
#define u_set unordered_set
#define testfor(T) ll T; cin>>T; while(T--)
using namespace std;
void quickstart()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(0);
}
int main()
{
	quickstart();
	testfor(T) {
		int n, m;
		cin >> n >> m;
		int **arr = new int*[n];
		int countR = 0;
		int countC = 0;
		bool x = true;
		for (int i = 0; i < n; i++) {
			arr[i] = new int[m];
			x = true;
			for (int j = 0; j < m; j++) {
				cin >> arr[i][j];
				if (arr[i][j]) {
					x = false;
				}
			}
			if (x) {
				countR += 1;
			}
		}
		for (int i = 0; i < m; i++) {
			x = true;
			for (int j = 0; j < n; j++) {
				if (arr[j][i]) {
					x = false;
					break;
				}
			}
			if (x) {
				countC += 1;
			}
		}

		int empCells = min(countC, countR);

		if (empCells % 2) {
			cout << "Ashish" << endl;
		} else {
			cout << "Vivek" << endl;
		}

	}

	return 0;
}
