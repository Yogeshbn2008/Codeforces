#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int> a(n);
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
         unordered_map<int,int> mp;
            for(int i = 0;i<n;i++){
                mp[a[i]]++;
            }
            int size = mp.size();
            if(size > 2){
                cout<<"No"<<endl;
            }else if(size == 2){
                
                auto it = mp.begin();
                int first = it->second;
                int second = (++it)->second;
                if(abs(first - second) <= 1){
                    cout<<"Yes"<<endl;
                }else{
                    cout<<"No"<<endl;
                }
            }else{
                cout<<"Yes"<<endl;
            }
    }
    return 0;
}