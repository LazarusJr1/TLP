#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	ofstream Escrita("anagram.txt");
	Escrita << "isto e um texto";
	Escrita.close();
	string nome;
	ifstream Leitura("anagram.txt");
	while (getline(Leitura, nome)) {

		cout << nome;

	}

	Leitura.close();

}