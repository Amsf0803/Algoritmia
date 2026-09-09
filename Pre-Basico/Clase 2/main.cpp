// #include <iostream>
// #include <vector>
// #include <set>
#include <bits/stdc++.h> // esto es un include que incluye todas las librerías de C++ 

// (no es buena práctica usarlo, pero es útil para no tener que escribir todos los includes)

using namespace std;
#define endl "\n" // esto es un define, es decir, cada vez que se escriba endl, se reemplazará por \n


int main() {
    // para no usar arrays, podemos usar vectores
    // array son int a[10]; esto es un array de un entero de 10 enteros

    int b;
    cin >> b; // esto es un entero que se lee desde la entrada estándar

    vector <int> a(3, 0); // esto es un vector de 3 enteros inicializados en 0

    cout << a[0] << endl; // imprimir, endl (normal) es = \n PERO también hace flush del buffer de salida, es decir, fuerza a que se escriba en pantalla lo que haya en el buffer de salida



    return 0;

}