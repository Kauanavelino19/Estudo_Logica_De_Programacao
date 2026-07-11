#include <iostream>
#include <string>
using namespace std;

int main() {
    string Nome, NomeMaiuscula;
    cout << "Digite seu nome: ";
    cin >> Nome;
    cout << "Seu nome tem " << Nome.length() << " letras !" << endl; // Tamanho da letras
    cout << "Seu nome em todas em letras maiusculas; ";

    for (int i = 0; i < Nome.length(); i++) {
        cout << (char)toupper(Nome[i]); //Letras Maiusculas
    }
    cout << endl;

    cout << "Seu nome em todas em letras minusculas: ";

    for (int i = 0; i < Nome.length(); i++) {
        cout << (char)tolower(Nome[i]); // Letras Minusculas
    }
    cout << endl;

    cout << "A primeira letra do nome eh " << Nome.substr(0,1) << endl; // Primeira Letra
    cout << "A ultima letra do seu nome eh " << (char)toupper(Nome[Nome.length() -1]) << endl; //Ulima letra
    cout << "Seu nome tem a letra A na posicao " << Nome.find('a') << endl; // Posicao da letra que deseja escolher

    NomeMaiuscula = Nome;
    for (int i = 0; i < NomeMaiuscula.length(); i++) {
        NomeMaiuscula[i] = toupper(NomeMaiuscula[i]); //Altera valor para maiuscula par acha a caractere 'A'
    }
    cout << endl;
    cout << "Seu nome tem a letra A na posicao " << NomeMaiuscula.find('A') << endl;

    cout << "O código da letra A e " << (int) NomeMaiuscula[NomeMaiuscula.find('A')]<< endl;
    cout << "A letra de codigo 65 e " << (char)65 << endl;
    for (int i = Nome.length(); i >= 0; i--) {
        cout << (char)toupper(Nome[i]);
    }
    cout << endl;
}
