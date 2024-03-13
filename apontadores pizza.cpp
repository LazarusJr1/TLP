#include <iostream>
#include <string>
using namespace std;
int main() {

	string comida = "Pizza";
	
	string* ptr = &comida;
	
	*ptr = "Hamburguer";

	cout << comida << "\n";













}