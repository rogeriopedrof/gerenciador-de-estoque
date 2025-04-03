#include <iostream>
#include <string>
using namespace std;

class principal
{
    public:

    string nome = "null";
    int quant = 0;
    string secao = "null";

    int adicaoItem()
    {

        cout << "Digite o nome do produto a ser adicionado ao estoque. \n";
        cin >> nome;

        cout << "Digite a quantidade do produto a ser adicionado ao estoque. \n";
        cin >> quant;

        cout << "Digite a secao em que o produto vai ser colocado. \n";
        cin >> secao;

        cout << "Uma quantidade de " << quant << " " << nome << " foi adicionado a secao " << secao << ". \n \n";
        principal::editarEstoque();

        return 0;
    }

    int removerItem()
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
                principal::editarEstoque();
                break;
            case 'N':
                cout << "\n";
                principal::editarEstoque();
                break;
            default:
                cout << "Ta tentando quebrar o codigo ne? ";
                principal::editarEstoque();
                break;
            }
        }else
        {
            cout << "Nao existe item no deposito para ser deletado. \n \n";
            principal::editarEstoque();
        }

        return 0;
    }

    int editarEstoque() 
    {
        int escolhedorS;

        cout << "Digite um numero para acessar as funcoes: \n 1. Adicao de item. \n 2. Remocao de item \n 3. Atualizar item \n 4. Sair \n";
        cin >> escolhedorS;

        switch (escolhedorS)
        {
            case 1:
                adicaoItem();
                break;
            case 2:
                removerItem();
                break;
            case 3:
                cout << "Atualizar item \n \n";
                principal::editarEstoque();
                break;
            case 4:
                break;
            default:
                cout << "Ta tentando quebrar o codigo ne? \n \n";
                principal::editarEstoque();
                break;
            }

        return 0;
    }
};

int main() {

    principal unico;

    cout << "-------------- Estoque --------------" << endl;
    cout << "Digite um numero para acessar as funcoes: \n 1. Editar Estoque. \n";

    int escolhedor;
    cin >> escolhedor;
    
    switch (escolhedor)
    {
    case 1:
        unico.editarEstoque();
        break;
    default:
        cout << "MEU IRMAO, CE E BURRO??? ESCOLHA ENTRE 1 OU 2!!! \n";
        break;
    }

        system ("pause");
  return 0;
}