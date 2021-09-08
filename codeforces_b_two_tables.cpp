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
		int W, H, x1, x2, y1, y2, w, h;
		cin >> W >> H >> x1 >> y1 >> x2 >> y2 >> w >> h ;
		int z1 = x2-x1;
		int z2 = y2-y1;
		if(w > W || h > H){
			cout << "-1\n";
		}else if(z1+w <= W || z2+h <= H){
			int hMax = max(y1, H-y2);
			int wMax = max(x1, W-x2);
			int xAdd, yAdd;
			if(W-x2 > x1){
				xAdd = -1;
			}else{
				xAdd = 1;
			}
			if(H-y2 > y1){
				yAdd = -1;
			}else{
				yAdd = 1;
			}
			int moves = 0;
			if(z1+w > W){
				while(x1 < w || W-x2 < w){
					x1 += xAdd;
					x2 += xAdd;
					moves++;
				}
			}else if(z2+h > H){
				while(y1 < y || H-y2 < y){
					y1 += yAdd;
					y2 += yAdd;
					moves++;
				}
			}
			
		}else{
			cout << "-1\n";
		}
	}
	return 0;
}