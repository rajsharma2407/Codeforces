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
		int *arr = new int[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		int count1 = 0;
		int count2 = 0;
		int index = 0;
		for(int i=0;i<n;i++){
			if(arr[i] == arr[0])
				count1++;
			else{
				count2++;
				index = i;
			}
		}
		cout << ((count1 == 1) ? 1 : index + 1 )<< endl;
	}
}