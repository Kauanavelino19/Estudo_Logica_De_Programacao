

#include <iostream>
#include <string>
using namespace std;

static void NomeProdutos( string &NomeProduto) {

    cin >> NomeProduto;
}
static void PrecoProdutos(int &PrecoProduto) {
    cin >> PrecoProduto;
}

int main() {
     cout << "===========================================" << endl;
     cout << " CADASTRO DE PRODUTOS DE CRIARE TECNOLOGIA" << endl;
     cout << "===========================================" << endl;

     string nomeProduto [4];
    int precoProduto[4];
     //NomeProdutos(nomeProduto[3]);
     for (int i = 0; i < 4; i++) {
         cout  << "Produto " << i + 1 << ": ";
         NomeProdutos(nomeProduto[i]);
         //cout << endl;
         cout << "Preco " << i + 1 << ": R$";
         PrecoProdutos(precoProduto[i]);
         //cout << endl;
     }

     cout << "PRODUTOS CADASTRADO" << endl;
     for (int i = 0; i < 4; i++) {
         cout << "Produto " <<  i + 1 << ": ";
         cout << nomeProduto[i] << endl;

         cout << "Preco " << i + 1 << ": R$";
         cout << precoProduto[i] << endl;
     }
    return 0;
}
