#include<bits/stdc++.h>
#define ll long long
#define mp(a, b) make_pair(a, b)
#define pb(x) push_back(x)
#define testcase(t) ll t; cin>>t; while(t--)
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("F:/c++/input.txt","r",stdin);
		freopen("F:/c++/output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

void solve() {
	int n;
	cin >> n;
	string str;
	cin >> str;
	vector<char> s;
	if(str[0] == 'M' || str[n-1] == 'M'){
		cout << "NO\n";
	}else{
		int countM = 0;
		int coutnT = 0;
		for(int i=0;i<n;i++){
			if(str[i] == 'M')
				countM++;
			else
				coutnT++;
		}
		bool poss = true;
		if(coutnT == countM*2){
			countM=0;
			coutnT=0;
			for(int i=0;i<n;i++){
				if(str[i] == 'M')
					countM++;
				else
					coutnT++;
				if(coutnT < countM){
					poss=false;
					break;
				}
			}
			coutnT=0;
			countM=0;
			for(int i=n-1;i>=0;i--){
				if(str[i] == 'M')
					countM++;
				else
					coutnT++;
				if(coutnT < countM){
					poss=false;
					break;
				}
			}
			if(poss)
				cout << "YES\n";
			else
				cout << "NO\n";
		}else{
			cout << "NO\n";
		}
	}
}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
}