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
		int A, B, n;
		cin>>A>>B>>n;
		int *power = new int[n];
		int *health = new int[n];
		int MAX = 0;
		for(int i=0;i<n;i++){
			cin>>power[i];
			if(power[i]>power[MAX])
				MAX=i;
		}
		for(int i=0;i<n;i++)
			cin>>health[i];
		
		int temp = health[MAX];
		health[MAX] = health[n-1];
		health[n-1] = temp;

		temp = power[n-1];
		power[n-1]=power[MAX];
		power[MAX]=temp;

		ll total=0;
		for(int i=0;i<n;i++){
			total+=ceil((health[i])/(double)A)*power[i];
		}
		total-=power[n-1];
		// cout<<total<<endl;
		if(B-total>0){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
}