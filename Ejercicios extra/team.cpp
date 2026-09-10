#include <bits/stdc++.h> 
using namespace std;
#define endl "\n"

int main(){

    int n,P,V,T,contador = 0;
    cin >> n;
    for(int i=0; i < n; i++){

        cin >> P >> V >> T;
        if (P + V + T >= 2){
            contador++;
        
        }
    }

    cout << contador << endl;

    return 0;
}

