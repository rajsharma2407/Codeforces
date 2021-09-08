#include<bits/stdc++.h>
#define ll long long
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
		int n, l, r;
		cin >> n >> l >> r;
		vector<int> arr(n);
		ll ans = 0;
		for(int i=0;i<n;i++)
			cin >> arr[i];
		sort(arr.begin(), arr.end());
		for(int i=0;i<n-1;i++){
			int x = i+1;
			int y = n-1;
			int md = -1;
			while(x <= y){
				md = x + (y-x)/2;
				if((md && arr[md]+arr[i] >= l && arr[md-1]+arr[i] < l) || (!md && arr[md] >= l && arr[md+1])){
					break;
				}else if(arr[md]+arr[i] < l){
					x = md+1;
				}else{
					y = md-1;
				}
			}
			int md2 = -1;
			x = i+1;
			y = n-1;
			while(x <= y){
				md2 = x + (y-x)/2;
				if((md2 < n-1 && arr[md2]+arr[i] <= r && arr[md2+1]+arr[i] > r) || (md2 == n-1 && arr[md2] <= r && arr[md2-1]+arr[i] > r)){
					break;
				}else if(arr[md2]+arr[i] > r){
					y = md2-1;
				}else{
					x = md2+1;
				}
			}
			// cout << i << " " << md << " " << md2 << endl;
			// cout << arr[i] << " " << arr[md] << " " << arr[md2] << endl;
			// cout << endl;
			if(arr[md]+arr[i] >=l && arr[md2]+arr[i] <=r){
				ans += (md2 - md + 1);
			}
		}
		cout << ans << endl;
	}
}