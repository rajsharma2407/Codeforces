#include<bits/stdc++.h>
#define ll long long
#define mp(a, b) make_pair(a, b)
#define pb(x) push_back(x)
#define testcase(t) ll t; cin>>t; while(t--)
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("F:/c++/input.txt","r",stdin);
		freopen("F:/c++/output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

void solve() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> arr(n, vector<int>(m));
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin >> arr[i][j];
	for(int i=n-1;i>=0;i--){
		for(int j=m-1;j>=0;j--){
			if(!arr[i][j]){
				if(arr[i][j+1] < arr[i+1][j]){
					arr[i][j] = arr[i][j+1]-1;
				}else{
					arr[i][j] = arr[i+1][j]-1;
				}
			}
		}
	}
	ll sum = 0;
	bool poss = true;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			sum += arr[i][j];
			if(j>0 && arr[i][j-1] >= arr[i][j]){
				poss=false;
				break;
			}
			if(i>0 && arr[i-1][j] >= arr[i][j]){
				poss=false;
				break;
			}
		}
	}

	if(poss)
		cout << sum << endl;
	else
		cout <<"-1\n";
}

int main(){
	quickstart();
		solve();
}