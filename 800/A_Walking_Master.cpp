
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int x = d-b;

        if(b > d || c > a+x){
            cout << -1 << endl;
        }else{
            cout << 2*x+a-c << endl;
        }
    }
    return 0;
}
