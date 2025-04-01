#include <iostream>
using namespace std;

int main() {
    cout << "-------------- Estoque --------------" << endl;
    cout << "Digite um numero para acessar as funcoes: \n 1.Editar Estoque. \n";

    int escolhedor;
    cin >> escolhedor;
    
    switch (escolhedor)
    {
    case 1:
        cout << "CHAME A FUNÇÃO";
        break;
    default:
        cout << "MEU IRMAO, CE E BURRO??? ESCOLHA ENTRE 1 OU 2!!!";
        break;
    }

        system ("pause");
  return 0;
}