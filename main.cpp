#include <iostream>
#include <fstream>
using namespace std;
//nome matriadelclasse
int main() {
	string nomedelprof[2];
	string matrialedelclasse[2];
	int quanto;
	int ilmododicercare;
	string matrialedelclasse;
	string nomedelprof;
	//quantità dei contatti
	cout << "Quanti informazioni sarebbero inseriti: ";
	cin >> quanto;

	
	// Create a text file
	ofstream MyWriteFile("esercizio_di_prof_maria.txt");
	
	//inserire il numero e il nome
	for(int x = 0; x < quanto; x ++){
	cout << "inserici il nome: ";
	cin >> nomedelprof[x];
	cout << endl;
	cout << "inserici il materiale della classe: ";
	cin >> matrialedelclasse[x];
	cout << endl;
	}
	for(int x = 0; x < quanto; x ++){
	MyWriteFile << nomedelprof[x];
	MyWriteFile << endl;
	MyWriteFile << matrialedelclasse[x];
	MyWriteFile << endl;
	}
	
	// Close the file
	MyWriteFile.close();
	
	// chiedere l'utente in quale modo vuole cercare il contatto
	cout << "In quale modo vorresti cercare il contatto, nome(0), numero(1): ";
	cin >> ilmododicercare;

string x;	
	// Read from the text file
	ifstream MyReadFile("esercizio_di_prof_maria.txt");

	// Use a while loop together with the getline() function to read the file line by line
	while (getline (MyReadFile, x)) {
		
			//metodo di cercare via nome	
	if(ilmododicercare == 0){
		// Chiedere dall'utente di inserire sia il nome sia il numero secondo quello che ha scelot
		cout << "Inserici il nome: ";
		cin >> nomedelprof;
		cout << endl;
		for(int x = 0; x < quanto; x ++){
		
			if(nomedelprof[x] == nomedelprof){
			
			cout << matrialedelclasse[x];
			
			}		
		}
	}
	
		//metodo di cercare via numero
	else{
		
		// Chiedere dall'utente di inserire sia il nome sia il numero secondo quello che ha scelot
		cout << "Inserici il materiale della classe: ";
		cin >> matrialedelclasse;
		cout << endl;
		for(int x = 0; x < quanto; x ++){
		
			if(matrialedelclasse[x] == matrialedelclasse){
			
			cout << nomedelprof[x] << endl;
			
			}
		}
	}
		
	

	// Close the file
	MyReadFile.close();
	} 
	return 0;
}
