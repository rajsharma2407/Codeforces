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
		// int *arr = new int[n+1];
		// for(int i=1;i<=n;i++){
		// 	cin>>arr[i];
		// }
		// arr[0]=10e4;
		// int temp = 0;
		// for(int i=1;i<=n;i++){
		// 	int count=0;
		// 	for(int j=1;j<=n;j++){
		// 		if(arr[i] == arr[j]){
		// 			count++;
		// 		}
		// 	}
		// 	if(count<=1 && arr[i]<arr[temp]){
		// 		temp=i;
		// 	}
		// }
		// if(temp != 0){
		// 	cout<<temp<<endl;
		// }else{
		// 	cout<<-1<<endl;
		// }
		map<int, int> frequency;
		map<int, int>::iterator it;
		int *arr = new int[n+1];
		for(int i=1;i<=n;i++){
			cin>>arr[i];
			frequency[arr[i]]++;
		}
		int element = 0;
		for(int i=1;i<=n;i++){
			if(frequency[arr[i]] == 1 && ( element==0  || arr[i]<arr[element])){
				element=i;
			}
		}
		if(element != 0)
			cout<<element<<endl;
		else
			cout<<-1<<endl;
	}
	return 0;
}