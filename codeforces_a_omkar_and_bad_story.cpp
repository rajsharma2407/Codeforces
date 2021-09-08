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
		map<int, int> mp;
		bool gt = true;
		for(int i=0;i<n;i++){
			cin >> arr[i];
			if(arr[i] < 0)
				gt = false;
			mp[arr[i]]++;
		}
		if(!gt){
			cout <<"NO\n";
			continue;
		}else{
			cout << "YES\n";
		}
		for(int i=0;i<arr.size();i++){
			for(int j=0;j<arr.size();j++){
				if(i != j){
					int val = abs(arr[i]-arr[j]);
					if(!mp[val]){
						mp[val]++;
						arr.push_back(val);
					}
				}
			}
		}
		cout << arr.size() << endl;
		for(int i=0;i<arr.size();i++)
			cout << arr[i] << " ";
		cout << endl;
	}
}