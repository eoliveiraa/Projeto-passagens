/*emilly oliveira e julia martelo*/

#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

vector<string> passageiros;
vector<string> origens;
vector<string> destinos;
vector<string> datas;

void limpaBufferDoCin()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void cadastrarPassagem()
{
    limpaBufferDoCin();

    string nome, origem, destino, data;
    cout << "Digite o nome do passageiro: \n";
    getline(cin, nome);
    cout << "\n";

    cout << "Digite a origem da viajem: \n";
    getline(cin, origem);
    cout << "\n";

    cout << "Digite o destino da viajem: \n";
    getline(cin, destino);
    cout << "\n";

    cout << "Digite a data  da viajem: \n";
    getline(cin, data);
    cout << "\n";

    passageiros.push_back(nome);
    origens.push_back(origem);
    destinos.push_back(destino);
    datas.push_back(data);
}

void listarPassagem()
{

    cout << "-------------------------------\n";
    cout << "|                              |\n";
    cout << "|     BEM VINDO AO PROGRAMA    |\n";
    cout << "|            DE                |\n";
    cout << "|     Lista de passageiros! :) |\n";
    cout << "|                              |\n";
    cout << " ------------------------------\n";
    cout << endl;
    cout << endl;

    cout << "quantidade de passagens: " << passageiros.size() << endl
         << endl;
    for (int i = 0; i < passageiros.size(); i++)
    {
        cout << "nome do passageiro:  \n"
             << passageiros[i] << endl;
        cout << "origem da viajem:  \n"
             << origens[i] << endl;
        cout << "destino da viajem:  \n"
             << destinos[i] << endl;
        cout << "data da viajem:  \n"
             << datas[i] << endl;
        cout << endl;
    }
}

void desenhaBoasvindas()
{

    cout << "-------------------------------\n";
    cout << "|                              |\n";
    cout << "|     BEM VINDO AO PROGRAMA    |\n";
    cout << "|            DE                |\n";
    cout << "|      PASSAGENS AEREAS! :)    |\n";
    cout << "|                              |\n";
    cout << " ------------------------------\n";
}

void desenhaMenu()
{

    cout << "------------MENU--------------\n";
    cout << "|                             |\n";
    cout << "|   Escolha uma opcao:        |\n";
    cout << "|    1) Cadastrar passagem    |\n";
    cout << "|    2) Listar passagens      |\n";
    cout << "|    0) Sair                  |\n";
    cout << "|                             |\n";
    cout << "------------MENU---------------\n";
    cout << "Opcao: \n";
}

int main()
{
    system("cls");

    int opcao = -1;
    string continua = "";

    desenhaBoasvindas();
    cout << endl;

    do
    {
        desenhaMenu();
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "Voce escolheu a opcao cadastrar passagem! \n";
            cadastrarPassagem();
            cout << "Cadastrado com sucesso!!Para continuar clique em <enter>." << endl;
            break;

        case 2:
            cout << "Voce escolheu a opcao listar passagem! \n";
            listarPassagem();
            break;

        case 0:
            cout << "Voce escolheu sair do programa! \n";
            break;

        default:
            cout << "Essa opcao eh invalida! \n";
            break;
        }
        cout << endl;

    } while (opcao != 0);

    cout << "Obrigado por utilizar o programa! :)\n\n";

    return 0;
}
