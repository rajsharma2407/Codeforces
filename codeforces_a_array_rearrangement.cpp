#include<bits/stdc++.h>
#define ll long long
#define testcase(t) ll t; cin>>t; while(t--)
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

int main(){
	quickstart();
	testcase(t){
		int n, x;
		cin>> n >> x;
		int *arr1 = new int[n];
		int *arr2 = new int[n];
		for(int i=0;i<n;i++)
			cin>>arr1[i];

		for(int i=0;i<n;i++)
			cin>>arr2[i];

		bool possible = true;
		for(int i=0;i<n;i++){
			if(arr1[i] + arr2[n-1-i] > x){
				possible = false;
				break;
			}
		}
		if(possible)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

}