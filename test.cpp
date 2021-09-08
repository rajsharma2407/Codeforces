#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        long long  n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        string maxStr = "";
        string temp = str;
        for(int i=0;i<str.length();i++){
            temp = str[n-1];
            str.pop_back();
            temp += str;
            cout << temp << endl;
            if(temp > maxStr){
                maxStr = temp;
            }
            str = temp;
        }
        vector<int> counter;
        temp = str;
        for(int i=n-1;i>=0;i--){
            temp = str[n-1];
            str.pop_back();
            temp += str;
            if(temp == maxStr)
                counter.push_back(i+1);
        }
        sort(counter.begin(), counter.end());
        long long ans = 0;
        long long val = k%counter.size()?k/counter.size():k/counter.size()-1;
        k = (k%counter.size())?k%counter.size():counter.size();
        ans = str.length()*val;
        long long prev = 1;
        int i=0;
        while(k){
            ans += counter[i] - prev;
            prev = counter[i];
            k--;
            i++;
        }
        cout << ans << endl;
    }
    return 0;
}