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
 		int k, n, m;
 		cin >> k >> n >> m;
 		vector<int> a(n);
 		vector<int> b(m);
 		for(int i=0;i<n;i++)
 			cin >> a[i];
 		for(int i=0;i<m;i++)
 			cin >> b[i];
 		int i=0;
 		int j=0;
 		vector<int> ans;
 		bool poss = true;
 		while(i < n || j < m){
 			if(i<n && a[i] == 0){
 				k++;
 				ans.push_back(a[i]);
 				i++;
 			}else if(j < m && b[j] == 0){
 				k++;
 				ans.push_back(b[j]);
 				j++;
 			}else if(i<n && j<m){
 				if(a[i] < b[j]){
 					if(a[i] > k){
 						poss=false;
 						break;
 					}else{
 						ans.push_back(a[i]);
 						i++;
 					}
 				}else{
 					if(b[j] > k){
 						poss=false;
 						break;
 					}else{
 						ans.push_back(b[j]);
 						j++;
 					}
 				}
 			}else{
 				if(i < n){
 					if(a[i] > k){
 						poss=false;
 						break;
 					}else{
 						ans.push_back(a[i]);
 						i++;
 					}
 				}else{
 					if(b[j] > k){
 						poss=false;
 						break;
 					}else{
 						ans.push_back(b[j]);
 						j++;
 					}
 				}
 			}

 		}
 		if(poss){
 			for(int i=0;i<ans.size();i++)
 				cout << ans[i] << " ";
 		}else{
 			cout << "-1";
 		}
 		cout << "\n";
 	}
 	return 0;
 }