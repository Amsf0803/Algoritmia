#include <bits/stdc++.h> 
using namespace std;
#define endl "\n"

int main(){
    int w;
    cin >> w;

    if(w % 2 == 0 && w > 2){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0; 
}