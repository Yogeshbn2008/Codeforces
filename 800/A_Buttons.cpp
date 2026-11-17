#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin>> t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int sum1 = a+c;
        int sum2 = b+c;
        if(sum1 > sum2){
            cout<<"first"<<endl;
        }else if(sum2 > sum1){
            cout<<"second"<<endl;
        }else{
            if(c%2 == 0){
                cout<<"second"<<endl;
            }else{
                cout<<"first"<<endl;
            }
        }
    }
    return 0;
}