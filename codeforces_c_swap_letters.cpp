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
	int n;
	string str1;
	string str2;
	cin >> n >> str1 >> str2;
	int a1 = 0;
	int b1 = 0;
	int a2 = 0;
	int b2 = 0;
	for(int i=0;i<n;i++){
		if(str1[i] == 'a'){
			a1++;
		}else{
			b1++;
		}
		if(str2[i] == 'b'){
			b2++;
		}else{
			a2++;
		}
	}
	if((a1+a2)%2 || (b1+b2)%2){
		cout << "-1\n";
	}else{
		int ab = -1;
		int ba = -1;
		int swaps = 0;
		vector<pair<int, int>> vp;
		for(int i=0;i<n;i++){
			if(str1[i] != str2[i]){
				if(str1[i] == 'a'){
					if(ab == -1)
						ab = i;
					else{
						vp.push_back(make_pair(ab, i));
						swaps++;
						str1[ab]=str2[ab];
						str2[i]=str1[i];
						ab=-1;
					}
				}else{
					if(ba == -1)
						ba=i;
					else{
						vp.push_back(make_pair(ba ,i));
						swaps++;
						str1[ba]=str2[ba];
						str2[i]=str1[i];
						ba=-1;
					}
				}
			}
		}
		if(ba >-1 && ab >-1){
			swaps+=2;
			vp.push_back(make_pair(ab, ab));
			vp.push_back(make_pair(ab, ba));
		}
		cout << swaps << endl;
		for(int i=0;i<vp.size();i++)
			cout << vp[i].first+1 << " " << vp[i].second+1 << endl;
	}

}