#include <iostream>
#include "matematica.h"

using namespace std;

int main(){
    
    int graus;
    
    cout << "Digite um ângulo (graus): \n";
    cin >> graus;

    cout << "O seno deste ângulo em radiano é: %f\n" << calcular_seno(graus) << endl;
    cout << "O cosseno deste ângulo em radiano é: %f\n" << calcular_cosseno(graus) << endl;
    cout << "A tangente deste ângulo em radiano é: %f\n" << calcular_tangente(graus) << endl;

    return 0;
}