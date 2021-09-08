#include<bits/stdc++.h>
#define ll long long
#define mp(a, b) make_pair(a, b)
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
	int n;
	cin >> n;	
	vector<ll> x(n);
	vector<ll> y(n);
	int a, b;
	int j=0, k=0;
	for(int i=0;i<2*n;i++){
		cin >> a >> b;
		if(a == 0){
			y[j] = b;
			if(y[j] < 0)
				y[j] *= -1;
			j++;
		}else{
			x[k] = a;
			if(x[k] < 0)
				x[k] *= -1;
			k++;
		}
	}
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	double ans = 0;
	for(int i=0;i<n;i++){
		ans += sqrt((double)(x[i]*x[i]) + (y[i]*y[i]));
	}
	cout << setprecision(15) << fixed << ans << endl;
}

int main(){
	quickstart();
	testcase(t){
		solve();
	}
}