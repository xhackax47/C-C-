/********************************** 
programme : BVOS calculatrice 2008 
Fichier : main.cpp 
Créateur : Bioopo 
Mail : bioopo@neuf.fr 
Création : 02/11/2007
**********************************/ 
/********************************** 
Ce programme est une calculatrice 
en console pour l'apprentissage des 
bases en c++ 
**********************************/

/*****************************************************
SECTION DE FICHERS A INCLURE
*****************************************************/
#include <iostream>

/*****************************************************
SECTION DE CONFIGURATION
*****************************************************/
using namespace std;

/*****************************************************
SECTION DE CODE
*****************************************************/

/********************************** 
Fonction main
Point d'entrée du programme
**********************************/
int main()
{
	//variable contenant les nombres saisies 
	double dblNombre1 = 0.0, dblNombre2 = 0.0; 

	//variable contenant le résultat de l'opération 
	double dblResultat =0.0; 

	//variable contenant le signe de l'opération 
	char chrOperand = '0'; 

	//Fonction permettant de saisir le premier nombre 
	cout << "Saisir le premier nombre" << endl; 
	cin >>dblNombre1; 

	//Fonction permettant de saisir le signe de l'opération 
	cout << "Saisir le signe de l'opération" << endl; 
	cin >> chrOperand; 

	//Fonction permettant de saisir le second nombre 
	cout << "Saisir le second nombre" << endl; 
	cin >> dblNombre2; 

     //Test pour déterminer le signe de l'opération et calcul l'opération 
	if(chrOperand == '+') 
	{ 
		dblResultat = dblNombre1 + dblNombre2; 
	} 
	if(chrOperand == '-') 
	{ 
		dblResultat = dblNombre1 - dblNombre2; 
	} 
	if(chrOperand == '*') 
	{ 
		dblResultat = dblNombre1 *  dblNombre2; 
	} 
	if(chrOperand == '/') 
	{ 
		dblResultat =dblNombre1 / dblNombre2; 
	} 

	//Fonction affichant le résultat de l'opération à l'écran 
	cout << "Le resultat est : "; 
	cout << dblResultat  << endl; 

	// Quitter le programme
	return 0;
}
