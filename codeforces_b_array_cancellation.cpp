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
		ll n;
		cin >> n;
		ll *arr = new ll[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		ll pos = 0;
		ll min = 0;
		for(int i=0;i<n;i++){
			if(arr[i] > 0){
				pos += arr[i];
			}else{
				if(pos+arr[i] >0 ){
					pos += arr[i];
				}else{
					min += pos+arr[i];
					pos=0;
				}
			}
		}
		cout << -1*min << endl;
	}
}