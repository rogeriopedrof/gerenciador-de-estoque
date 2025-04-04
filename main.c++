#include <iostream>
using namespace std;

string nome = "null";
int quant = 0;
string secao = "null";

// Declaração das outras funções
void editorestoque();
void listarestoque();
void adicaoItem();
void removerItem();
void atualizarItem();

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
    cout << "\n1. Adicionar Item. \n2. Remover Item. \n3. Atualizar Item. \n0. Voltar p/ HOMEPAGE." <<endl;
    cout << "==============================" << endl;
    cout << "Escolha uma das opcoes (1,2,0): ";
    int escolhedor;
    cin >> escolhedor;

    switch (escolhedor)
    {
    case 0:
        main();
        break;
    case 1:
        adicaoItem();
        break;
    case 2:
        removerItem();
        break;
    case 3:
        atualizarItem();
        break;
    default:
        cout << "Opcao invalida, BURRAO!!" << endl;
        break;
    }
    system("pause");
}

void adicaoItem()
{
    cout << "Digite o nome do produto a ser adicionado ao estoque. \n";
    cin >> nome;

    cout << "Digite a quantidade do produto a ser adicionado ao estoque. \n";
    cin >> quant;

    cout << "Digite a secao em que o produto vai ser colocado. \n";
    cin >> secao;

    cout << "Uma quantidade de " << quant << " " << nome << " foi adicionado a secao " << secao << ". \n \n";
    system ("pause");
    
}

void removerItem()
{
    char escolhaR;

    if (nome != "null"){
        cout << "Deseja deletar o item " << nome << "? \n Digite Y para sim ou N para nao. \n";
        cin >> escolhaR;

        switch (escolhaR)
        {
        case 'Y':
            cout << "O item " << nome << " foi deletado! \n \n";
            nome = "null";
            break;
        case 'N':
            cout << "\n";
            editorestoque();
            break;
        default:
            cout << "Ta tentando quebrar o codigo ne? " ;
            break;
        }
    }else
    {
        cout << "Nao existe item no deposito para ser deletado." << endl;
    }
    system ("pause");
}

void atualizarItem()
{
    int escolherA;

    cout << "O que deseja atualizar?" << endl;
    cout << "\n1. Nome. \n2. Quantidade. \n3. Secao. \n0. Voltar p/ HOMEPAGE." <<endl;
    cout << "==============================" << endl;
    cout << "Escolha uma das opcoes (1,2,3,0): " << endl;
    cin >> escolherA;

    switch (escolherA)
    {
    case 0:
        main();
        break;
    case 1:
        if (nome == "null")
        {
            cout << "Nao existe produto no estoque." << endl;
            break;
        }else 
        {
            cout << "Digite um novo nome: ";
            cin >> nome;
            cout << "Agora o produto se chama: " << nome << endl;
            break;
        }
    case 2:
        if (quant == 0)
        {
            cout << "Nao tem produto no estoque." << endl;
            break;
        }else
        {
            cout << "Digite uma nova quantidade: ";
            cin >> quant;
            cout << "Agora tem " << quant << " de " << nome << " no estoque!" << endl;
            break;
        }
    case 3:
        if (secao == "null")
        {
            cout << "Nao tem produto no estoque." <<endl;
            break;
        }else
        {
            cout << "Digite a nova secao do produto: ";
            cin >> secao;
            cout << "Agora o produto " << nome << " esta na secao " << secao << "!" << endl;
            break;
        }
    default:
        cout << "Ta tentando quebrar o codigo ne? "  << endl;
        break;
    }
    system ("pause");
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