#include <bits/stdc++.h>
using namespace std;

void quicksort(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
}

int main(){
    quicksort();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        int x=n;
        int arr[9]={0};
        while(x){
            x/=10;
            count++;
        }
        if(count == 1){
            cout<<n<<endl;
        }else if(n<46 && n>0){
            for(int i=9;i>0;i--){
                if(n && n-i>=0){
                    arr[9-i]=i;
                    n-=i;
                }
            }
            for(int i=8;i>=0;i--){
                if(arr[i]!=0){
                    cout<<arr[i];
                }
            }
            cout<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0; 
} 
    