#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        string s;
        cin>>n>>s;
        int cnt = 0;
        for(int i =0;i<n;i++){
            if(s[i] == '.') cnt++;
            if(i<n-2){
                if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.'){
                    cnt = 2;
                    break;
                }
            }
        }
        cout << cnt << endl;
    }

}