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

int getGcd(int x, int y){
	if(x == 0)
		return y;
	return getGcd(y%x, x);
}

bool comp1(int x, int y){
	return (x%2 == 0 && y%2 != 0);
}

int main(){
	quickstart();
	testcase(t){
		int n;
		cin >> n;
		int *arr = new int[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		sort(arr, arr+n, comp1);
		ll ans = 0;
		for(int i=0;i<n;i++){
			if(arr[i]%2 == 0){
				ans += n-1-i;
			}else{
				for(int j=i+1;j<n;j++){
					int x = getGcd(arr[i], arr[j]);
					if(x>1){
						ans+=1;
					}
				}
			}
		}
		cout << ans << endl;
	}
}