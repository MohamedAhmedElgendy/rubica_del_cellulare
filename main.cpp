#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int numero_del_celluelare[500];
	string nome_della_persona[500];
	int contatti;
	int il_modo_di_cercare;
	int il_numero;
	string il_nome;
	//quantità dei contatti
	cout << "Inserici quanti contatti sarebbero inseriti: ";
	cin >> contatti;
	
	// Create a text file
	ofstream MyWriteFile("rubica_del_cellulare.txt");
	
	//inserire il numero e il nome
	for(int x = 0; x < contatti; x ++){
	cout << "inserici il nome: ";
	cin >> nome_della_persona[x];
	cout << endl;
	cout << "inserici il numero: ";
	cin >> numero_del_celluelare[x];
	cout << endl;
	}
	for(int x = 0; x < contatti; x ++){
	MyWriteFile << nome_della_persona[x];
	MyWriteFile << endl;
	MyWriteFile << numero_del_celluelare[x];
	MyWriteFile << endl;
	}
	
	// Close the file
	MyWriteFile.close();
	
	// chiedere l'utente con quale modo vuole cercare il contatto
	cout << "In quale modo vorresti cercare il contatto, nome(0), numero(1): ";
	cin >> il_modo_di_cercare;

string x;	
	// Read from the text file
	ifstream MyReadFile("rubica_del_cellulare.txt");

	// Use a while loop together with the getline() function to read the file line by line
	while (getline (MyReadFile, x)) {
		
			//metodo di cercare via nome	
	if(il_modo_di_cercare == 0){
		// Chiedere dall'utente di inserire sia il nome sia il numero secondo quello che ha scelot
		cout << "Inserici il nome: ";
		cin >> il_nome;
		cout << endl;
		for(int x = 0; x < contatti; x ++){
		
			if(nome_della_persona[x] == il_nome){
			
			cout << nome_della_persona[x];
			cout << numero_del_celluelare[x];
			
			}		
		}
	}
	
		//metodo di cercare via numero
	else{
		
		// Chiedere dall'utente di inserire sia il nome sia il numero secondo quello che ha scelot
		cout << "Inserici il numero: ";
		cin >> il_numero;
		cout << endl;
		for(int x = 0; x < contatti; x ++){
		
			if(numero_del_celluelare[x] == il_numero){
			
			cout << nome_della_persona[x] << endl;
			cout << numero_del_celluelare[x] << endl;
			
			}
		}
	}
		
	

	// Close the file
	MyReadFile.close();
	} 
	return 0;
}
