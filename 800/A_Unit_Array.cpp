#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int>a(n);
        int ncnt =0;
        for(int i = 0 ; i < n ; i++){
            cin>>a[i];
            if(a[i] == -1){
                ncnt++;
            }
        }
        int pcnt = n-ncnt;
        int ans =0;
        while(pcnt<ncnt || ncnt%2 == 1){
            ans++;
            pcnt++;
            ncnt--;
        }
        cout<<ans<<endl;
    }
    return 0;
}