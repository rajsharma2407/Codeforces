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
	int n;
	cin >> n;
	int *arr = new int[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	vector<int> v;
	int mx =0;
	for(int i=0;i<n;i++){
		if(arr[i] > mx){
			mx = arr[i];
			v.push_back(i);
		}
	}
	int x = v.size();
	x--;
	while(x>=0){
		int len=0;
		for(int i=v[x];i<n;i++){
			cout << arr[i] <<" ";
			len++;
		}
		n-=len;
		x--;
	}
	cout << endl;
	}
}