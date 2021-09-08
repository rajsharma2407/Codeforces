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
		int n;
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		int x = INT_MAX, y=INT_MIN;
		for(int i=0;i<n;i++){
			x = min(x, arr[i]);
			y = max(y, arr[i]);
		}
		int ans = 0;
		int i=0;
		int count = 0;
		while(count < 2){
			if(arr[i] == x || arr[i] == y){
				count ++ ;
			}
			i++;
		}
		ans = i;
		count=0;
		i = n-1;
		while(count < 2){
			if(arr[i] == x || arr[i] == y){
				count++ ;
			}
			i--;
		}
		ans = min(n-i-1, ans);
		int j = n-1;
		i=0;
		count = 0;
		while(count < 1){
			if(arr[i] == x || arr[i] == y){
				count ++ ;
			}
			i++;
		}
		count = 0;
		while(count < 1){
			if(arr[j] == x || arr[j] == y){
				count ++ ;
			}
			j--;
		}
		ans = min(ans, (i + n-j-1));
		cout << ans << endl;
	}
}