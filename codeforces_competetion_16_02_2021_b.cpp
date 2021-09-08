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
		cin>>n;
		int arr[n];
		int c[3]={0};
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			c[arr[i]%3]++;
		}
		bool x = true;
		int count=0;
		while(x){
			x=false;
			for(int i=0;i<3;i++){
				if(c[i]>n/3 && i!=2){
					c[i+1]+=1;
					c[i]-=1;
					count++;
					x=true;
				}else if(i == 2 && c[i]>n/3){
					c[0]+=1;
					c[i]-=1;
					count++;
					x=true;
				}
			}
		}
		cout<<count<<endl;
	}
}