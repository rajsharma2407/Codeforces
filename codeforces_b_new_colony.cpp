#include<bits/stdc++.h>
#define ll long long
#define testcase(t) ll t; cin>>t; while(t--)
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("F:/c++/23-01-2021/CodeForces/input.txt","r",stdin);
		freopen("F:/c++/23-01-2021/CodeForces/output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

int main(){
	quickstart();
	testcase(t){
		int n, k;
		cin >> n >> k;
		int *arr = new int[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		int boulder=0;
		int i;
		for(i=0;i<n;){
			if(i > 0 && arr[i-1] < arr[i]){
				arr[i-1] += 1;
				boulder += 1;
				i--;
			}else if(i+1 < n && arr[i] < arr[i+1]){
				arr[i] += 1;
				boulder += 1;
			}else
				i++;
			if(k == boulder)
				break;
		}
		if(k != boulder)
			cout << "-1\n";
		else
			cout << i+1 << endl;

	}
}