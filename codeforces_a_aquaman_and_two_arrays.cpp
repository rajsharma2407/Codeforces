#include<bits/stdc++.h>
#define ll long long
#define pb(x) push_back(x)
#define mp(x, y) make_pair(x, y)
#define f first
#define s second
#define testcase(t) ll t; cin>>t; while(t--)
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("F:/c++/input.txt","r",stdin);
		freopen("F:/c++/output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

int main(){
	quickstart();
	testcase(t){
		int n;
		cin >> n;
		int *a = new int[n];
		int *b = new int[n];
		for(int i=0;i<n;i++)
			cin >> a[i];
		for(int j=0;j<n;j++)
			cin >> b[j];
		int m = 0;
		int sum1 = 0;
		int sum2 = 0;
		for(int i=0;i<n;i++){
			m += abs(a[i] - b[i]);
			sum1 += a[i];
			sum2 += b[i];
		}
		m = ceil(m/2);
		if(m > 100 || sum1 != sum2){
			cout << "-1\n";
		}else{
			vector<pair<int, int>> ans;
			int i=0;
			int j=1;
				while(i < n && j < n){
					if(a[i] == b[i]){
						i++;
						j=i+1;
					}else if(a[j] == b[j] || i == j){
						j++;
					}else if(a[i] > b[i]){
						if(a[j] > b[j]){
							j++;
							continue;
						}
						ans.pb(mp(i ,j));
						a[i]--;
						a[j]++;
					}else{
						if(a[j] < b[j]){
							j++;
							continue;
						}
						if(a[j] == 0){
							j++;
						}else{
							a[i]++;
							a[j]--;
							ans.pb(mp(j, i));
						}
					}
				}
				if(ans.size() > 100){
					cout << "-1\n";
					continue;
				}
			cout << ans.size() << endl;
			for(int i=0;i<ans.size();i++){
				cout << ans[i].f+1 << " " << ans[i].s+1 << endl;
			}
		}
	}
	return 0;
}