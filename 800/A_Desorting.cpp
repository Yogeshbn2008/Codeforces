#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int mini = INT_MAX;
        bool sorted = true;

        for(int i = 1; i < n; i++){
            if(a[i] < a[i-1]){
                sorted = false;
                break;
            }
            mini = min(mini, a[i] - a[i-1]);
        }

        if(!sorted) cout << 0 << '\n';
        else cout << mini / 2 + 1 << '\n';
    }

    return 0;
}
