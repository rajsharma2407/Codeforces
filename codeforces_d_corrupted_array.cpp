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
		ll n;
		cin >> n;
		ll z = n+2;
		ll *b = new ll[z];
		for(int i=0;i<n+2;i++){
			cin >> b[i];
		}
		ll sum = 0;
		sort(b, b+z);
		for(int i=0;i<n;i++){
			sum += b[i];
		}
		if(sum == b[n+1] || sum == b[n]){
			for(int i=0;i<n;i++)
				cout << b[i] << " ";
			cout << endl;
		}else{
			sum += b[n];
			ll var = (sum - b[n+1]);
			bool poss = false;
			for(int i=0;i<n+1;i++){
				if(b[i] == var){
					poss = true;
					break;
				}
			}
			int count = 0;
			if(poss){
				for(int i=0;i<n+1;i++){
					if(b[i] == var && count == 0){
						count++;
					}else{ 
						cout << b[i] << " ";
					}
				}
				cout << endl;
			}else{
				cout << "-1\n";
			}
		}
	}
}