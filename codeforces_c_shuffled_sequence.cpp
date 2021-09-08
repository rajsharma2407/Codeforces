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
	int n;
	cin >> n;
	map<int, int> freq;
	int *arr = new int[n];
	vector<int> inc;
	vector<int> dec;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		freq[arr[i]] += 1;
	}
	int flag = 0;
	sort(arr, arr+n);
	for(int i=0;i<n;i++){
		if(freq[arr[i]] > 2){
			flag = 1;
			break;
		}
		// cout << freq[arr[i]] << endl;
		if(freq[arr[i]] > 1){
		freq[arr[i]] -= 1;
		dec.push_back(arr[i]);
		continue;
		}
		inc.push_back(arr[i]);
	}
	if(flag){
		cout << "NO\n";
	}else{
		cout << "YES\n";
		cout << inc.size() << endl;
		for(int i=0;i<inc.size();i++)
			cout << inc[i] << " ";
		cout << endl;
		cout << dec.size() << endl;

		for(int i=dec.size()-1;i>=0;i--)
			cout << dec[i] << " ";
		cout << endl;
	}
}