#include <iostream>
using namespace std;

namespace libreria{
    int funcion(int x, int y){
        return x + y;
    }
}

int funcion(int x, int y){
    return x - y;
}

int main(){
    cout << "Resultado libreria: " << libreria::funcion(5,3) << endl;
    cout << "Resultado nuestra funcion: " << funcion(5,3) << endl;

    return 0;
}
