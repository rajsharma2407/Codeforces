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
	ll y, n, k;
	cin >> y >> k >> n;
	int count = 0;
	int i = k - y%k;
	for(;i+y<=n;){
		count++;
		if((y + i)%k == 0){
			cout << i << " ";
			i+=k;
			continue;
		}
		i++;
	}
	if(count)
		cout << endl;
	else
		cout << "-1\n";
}