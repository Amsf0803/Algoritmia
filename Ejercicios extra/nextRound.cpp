#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int n,k,calk,r;
    cin >> n >> k;
    int cal[n];
    for(int i=0; i < n; i++){

        cin >> cal[i];
    }

    calk = cal[k-1];
    r = 0;

    for(int i = 0; i<n; i++){
        if(cal[i] >= calk && cal[i]>0){
            r++;
        }

    }

    cout << r << endl;
    return 0;
}