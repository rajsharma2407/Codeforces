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
		vector<int> even;
		vector<int> odd;
		int z;
		for(int i=0;i<n;i++){
			cin >> z;
			if(z%2){
				odd.push_back(z);
			}else{
				even.push_back(z);
			}
		}
		sort(even.begin(), even.end(), greater<int>());
		sort(odd.begin(), odd.end(), greater<int>());
		int x = 0;
		int y = 0;
		ll sumEven = 0;
		ll sumOdd = 0;
		while(1){
			if(x >= even.size() && y >= odd.size())
				break;
			if(x < even.size() && y < odd.size()){
				if(even[x] >= odd[y]){
					sumEven += even[x];
					x++;
				}else{
					y++;
				}
			}else{
				if(x < even.size()){
					sumEven += even[x];
					x++;
				}else{
					y++;
				}
			}

			if(x < even.size() && y < odd.size()){
				if(even[x] < odd[y]){
					sumOdd += odd[y];
					y++;
				}else{
					x++;
				}
			}else{
				if(y < odd.size()){
					sumOdd += odd[y];
					y++;
				}else{
					x++;
				}
			}
		}
		if(sumEven == sumOdd){
			cout << "Tie\n";
		}else if(sumEven > sumOdd){
			cout << "Alice\n";
		}else{
			cout << "Bob\n";
		}
	}
}