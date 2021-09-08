#include<bits/stdc++.h>
#define ll long long
#define pb(x) push_back(x)
#define testcase(t) ll t; cin>>t; while(t--)
using namespace std;

void quickstart(){
	#ifndef ONLINE_JUDGE
		freopen("F:/c++/input.txt","r",stdin);
		freopen("F:/c++/output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
}

void solve() {
	int n, k, x;
	cin >> n >> k;
	map<int, int> mp;
	for(int i=0;i<n;i++)	{
		cin >> x;
		mp[x%k]++;
	}
	ll ans = 0;
	for(auto it = mp.begin(); it != mp.end(); it++){
		if(it->first == 0){
			ans += 1;
		}
		else{
			if(it -> first == k - it->first){
				ans+=1;
			}else{
				int mn = min(it->second, mp[k-it->first]);
				if(mn){
					ans +=1;
					it->second -= mn;
					mp[k-it->first] -= mn;
					if(it->second)
						it->second -= 1;
					if(mp[k-it->first])
						mp[k-it->first] -= 1;
				}
				if(it->second){
					ans += it->second;
					it->second=0;
				}
				if(mp[k-it->first]){
					ans += mp[k-it->first];
					mp[k-it->first] = 0;
				}
			}
		}
	}
		cout << ans << endl;
}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
}