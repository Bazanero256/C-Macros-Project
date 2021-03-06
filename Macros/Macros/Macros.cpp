// Macros.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

// Los parentesis dentro de las macros funcionan basicamente para conservar la presedencia de lo deseado. 
// Sin los parentesis, el preprocesador realiza la sustitucion antes de ejecutar por lo que el calculo queda :
// 5 + 3 + 1 * 2 = 10. 
//Mientras que con los parentesis la sustitucion se realiza correctamente quedando el calculo: 
// (5 + (3 + 1)) * 2 = 18; que es el resultado que deseamos. 
// 
#define SUMF(a,b) ((a)+(b))
#define SUMNF(a,b) a + b
using namespace std;
int f() {return 3;}
int main()
{
	int m = 5;
	int sum1 = SUMF(m, f() + 1) * 2;
	int sum2 = SUMNF(m, f() + 1) * 2;
	
	cout << "La suma entre m y f() + 1 es " << sum1 << endl;
	cout << "La suma entre m y f() + 1 es " << sum2 << endl;
	return 0;
}

