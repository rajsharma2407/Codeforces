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
	string str;
	cin >> str;
	int start;
	if(n%2 == 0)
		start=1;
	else
		start = 0;
	int count=0;
	for(int i=start;i<n;i+=2){
		if(start != 0 && (str[i] == '0' || str[i] == '2' || str[i] == '4' || str[i] == '6' || str[i] == '8')){
			count++;
		}else if(start == 0 && (str[i] == '1' || str[i] == '3' || str[i] == '5' || str[i] == '7' || str[i] == '9')){
			count++;
		}
	}
	if(n == 1){
		if(((int)str[0]-48)%2 == 0){
			cout << "2\n";
		}else{
			cout << "1\n";
		}
		continue;
	}

	if(count >= 1 && start == 0){
		cout << "1\n";
	}else if(start == 0){
		cout << "2\n";
	}else if(start == 1 && count >= 1){
		cout << "2\n";
	}else{
		cout << "1\n";
	}
}
}