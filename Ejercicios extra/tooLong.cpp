#include <bits/stdc++.h> 
using namespace std;
#define endl "\n"

int main(){
    int n,largo;
    string palabra="";
    char pri,last;
    cin >> n;

    for (int i=0;i<n;i++){

        cin >> palabra;
        largo = palabra.length();
        if (largo > 10){
            pri = palabra[0];
            last = palabra[largo-1];

            cout << pri <<(largo-2) << last << endl ;
        }else{
            cout << palabra<<endl;
        }
    }   
    return 0;
}


