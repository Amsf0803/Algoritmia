#include <bits/stdc++.h> 
using namespace std;
/*
    Solo cuando hay 1 partida
    o
    2 jug e impares partidas


    N son jugadores
    K son partidas
*/

int main(){

    int N,K;
    cin >> N >> K;

    if ((K == 1 || (N == 2 && K%2 == 1))){
        cout << "S";

    }else{
        cout << "N";
    }




}