#include <iostream>
using namespace std;

// Declaração das outras funções
void editorestoque();
void listarestoque();

int main() {
    while (true) // MENU
    {
        system ("cls"); // Limpa a tela (Windows)
        cout << "---------- Gerenciador de Estoque ----------" << endl;
        cout << "1. Editar Estoque.\n2. Listar Estoque. \n0. Sair. \n";
        cout << "Escolha uma das opcoes (1,2,0): ";
        int escolhedor;
        cin >> escolhedor;

        switch (escolhedor)
        {
        case 1:
            editorestoque();
            break;
        case 2:
            listarestoque();
            break;
        case 0:
            cout << "Saindo...";
            exit(0); // Isso fecha o executavel
            break;
        default:
            cout << "Opcao invalida, BURRAO!!";
            break;
        }
        system ("pause");
    }
    
  return 0;
}

// As funcoes de factos:
void editorestoque(){
    system ("cls");
    cout << "Voce esta no Editor de Estoque!" << endl;
    cout << "0. Voltar p/ HOMEPAGE." <<endl;
    cout << "Escolha uma das opcoes (0): ";
    int escolhedor;
    cin >> escolhedor;

    switch (escolhedor)
    {
    case 0:
        main();
        break;
    
    default:
        cout << "Opcao invalida, BURRAO!!";
        break;
    }
    system("pause");
}

void listarestoque(){
    system ("cls");
    cout << "Voce esta na Lista!" << endl;
    cout << "0. Voltar p/ HOMEPAGE." << endl;
    cout << "Escolha uma das opcoes (0): ";
    int escolhedor;
    cin >> escolhedor;

    switch (escolhedor)
    {
    case 0:
        main();
        break;
    
    default:
        cout << "Opcao invalida, BURRAO!!";
        break;
    }
    system("pause");
}