// Macros.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

#define SUMF(a,b) ((a)+(b))
#define SUMNF(a,b) a + b
using namespace std;
int f() {return 3;}
int main()
{
	int m = 5;
	int sum1 = SUMF(m, f() + 1) * 2;
	int sum2 = SUMNF(m, f() + 1) * 2;
	
	cout << "La suma entre m y f() + 1 es" << sum1 << endl;
	cout << "La suma entre m y f() + 1 es " << sum2 << endl;
	return 0;
}

