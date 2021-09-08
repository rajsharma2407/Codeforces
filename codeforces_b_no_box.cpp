#include<bits/stdc++.h>
#define ll long long
#define testcase(t) ll t; cin>>t; while(t--)
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("F:/c++/23-01-2021/CodeForces/input.txt","r",stdin);
		freopen("F:/c++/23-01-2021/CodeForces/output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

int main(){
	quickstart();
	testcase(t){
		int n, m;
		cin >> n >> m;
		int arr[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> arr[i][j];
			}
		}
		int count = 0;
		int min = 200;
		int sum = 0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(arr[i][j] < 0){
					count++;
					arr[i][j] *= -1;
				}
				if(arr[i][j] < min){
					min = arr[i][j];
				}
				sum += arr[i][j];
			}
		}
		if(count%2 != 0)
			sum -= min*2;
		cout << sum << endl;
	}
}