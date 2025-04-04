#include <iostream>
using namespace std;

// Declaração das outras funções
void editorestoque();
void listarestoque();

void titulo(){
    cout << R"(
 _____                          _           _                   _          _____    _                         
|  __ \                        (_)         | |                 | |        |  ___|  | |                        
| |  \/ ___ _ __ ___ _ __   ___ _  __ _  __| | ___  _ __     __| | ___    | |__ ___| |_ ___   __ _ _   _  ___ 
| | __ / _ \ '__/ _ \ '_ \ / __| |/ _` |/ _` |/ _ \| '__|   / _` |/ _ \   |  __/ __| __/ _ \ / _` | | | |/ _ \
| |_\ \  __/ | |  __/ | | | (__| | (_| | (_| | (_) | |     | (_| |  __/   | |__\__ \ || (_) | (_| | |_| |  __/
 \____/\___|_|  \___|_| |_|\___|_|\__,_|\__,_|\___/|_|      \__,_|\___|   \____/___/\__\___/ \__, |\__,_|\___|
                                                                                                | |           
                                                                                                |_|           )";
}

int main() {

    while (true) // MENU
    {
        system ("cls"); // Limpa a tela (Windows)
        titulo();
        cout << "\n1. Editar Estoque.\n2. Listar Estoque. \n0. Sair. \n";
        cout << "==================================" << endl;
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
    cout << R"(
 _____    _ _ _             
|  ___|  | (_) |            
| |__  __| |_| |_ ___  _ __ 
|  __|/ _` | | __/ _ \| '__|
| |__| (_| | | || (_) | |   
\____/\__,_|_|\__\___/|_|   
                            )";
    cout << "\n0. Voltar p/ HOMEPAGE." <<endl;
    cout << "==============================" << endl;
    cout << "Escolha uma das opcoes (0): ";
    int escolhedor;
    cin >> escolhedor;

    switch (escolhedor)
    {
    case 0:
        main();
        break;
    
    default:
        cout << "Opcao invalida, BURRAO!!" << endl;
        break;
    }
    system("pause");
}

void listarestoque(){
    system ("cls");
    cout << R"(
 _     _     _        
| |   (_)   | |       
| |    _ ___| |_ __ _ 
| |   | / __| __/ _` |
| |___| \__ \ || (_| |
\_____/_|___/\__\__,_|
                      )" << endl;
    cout << "\n0. Voltar p/ HOMEPAGE." << endl;
    cout << "==============================" << endl;
    cout << "Escolha uma das opcoes (0): ";
    int escolhedor;
    cin >> escolhedor;

    switch (escolhedor)
    {
    case 0:
        main();
        break;
    
    default:
        cout << "Opcao invalida, BURRAO!!" << endl;
        break;
    }
    system("pause");
}