#include<bits/stdc++.h>
using namespace std;

void fastRun(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		ios_base::sync_with_stdio(0);
}

int main(){
	fastRun();
	int t;
	cin>>t;
	while(t--){
		int n, x, count1=0, count2=0;
		cin>>n;
		while(n--){
			cin>>x;
			if(x == 1)
				count1++;
			else
				count2+=2;
		}
			if((count2+count1)%2 == 0){
				while(count2>=4){
					count2-=4;
				}
				if(count1 >= count2){
					count1-=count2;
					count2-=count2;
				}
				if(count1%2 == 0 && count2==0){
					cout<<"YES\n";
				}else{
					cout<<"NO\n";
				}
			}else{
				cout<<"NO\n";
			}
	}
	return 0;
}