#include<iostream>
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
		int x;
		cin>>n;
		cin>>x;
		int *arr = new int[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		long long int real=0, imaginary=0;
		for(int i=0;i<n;i++){
			if(arr[i]%x == 0){
				real+=(arr[i]/x);
			}else{
				real+=(arr[i]/x)+1;
			}
		}
		long long int count=0;
		for(int i=0;i<n;i++){
			if(arr[i]%x != 0){
				count+=arr[i];
			}else{
				imaginary+=arr[i]/x;
			}
		}
		imaginary+=(count)/x;
		if(count%x != 0)
			imaginary++;
		cout<<imaginary<<" "<<real<<endl;
	}
}