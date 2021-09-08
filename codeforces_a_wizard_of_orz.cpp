#include<bits/stdc++.h>
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
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x=9;
		for(int i=1;i<=n;i++){
			if(i ==2)
				x=8;
			if(x>9)
				x=0;
			cout<<x;
			x++;
		}
		cout<<endl;
	}
	return 0;
}