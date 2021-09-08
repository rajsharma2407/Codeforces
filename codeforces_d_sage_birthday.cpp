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
	int x;
	set<int> s;
	for(int i=0;i<n;i++){
		cin >> x;
		s.insert(x);
	}
	float z = ceil((float)s.size()/2) - 1;
	cout << z << endl;
	vector<int>v(s.begin(), s.end());
	int i=0;
	for(i=1;i<v.size();i+=2){
		cout << v[i] << " ";
		cout << v[i-1] << " ";
	}
	if(v.size()%2 != 0)
		cout << v[i-1] ;
	cout << endl;
}