#include <bits/stdc++.h> 

using namespace std;
#define endl "\n"

int main() {
    
    int n,a,b;
    cin >> n >> a >> b;
    string s;
    cin >> s; // 1010 = [1,0,1,0]

    if(s[a-1] == s[b-1]) // en la misma
    {
        cout << 0 << endl;
    }else // en diferente
    {
        cout << 1 << endl;
    }



    return 0;
}
