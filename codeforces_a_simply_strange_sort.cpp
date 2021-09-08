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
		for(int i=0;i<n;i++)
			cin >> arr[i];
		int ans = 0;
		for(int i=0;i<n;i++){
			bool flag=false;
			for(int k=0;k<n-1;k++){
				if(arr[k] > arr[k+1]){
					flag=true;
					break;
				}
			}
			if(!flag){
				break;
			}else{
				ans++;
			}
			for(int j=i%2;j<n-1;j+=2){
				if(arr[j+1] < arr[j]){
					swap(arr[j+1], arr[j]);
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}