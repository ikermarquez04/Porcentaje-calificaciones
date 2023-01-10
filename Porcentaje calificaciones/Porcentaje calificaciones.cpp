#include <iostream>

using namespace std;

int main()
{
	float practica, teorica, participacion, NotaFinal = 0;

	cout << "escribe la nota formativa: "; cin >> practica;
	cout << "escribe la nota sumativa: "; cin >> teorica;
	cout << "escribe la nota de participación: "; cin >> participacion;

	practica *= 0.30;
	teorica *= 0.60;
	participacion *= 0.10;

	NotaFinal = practica + teorica + participacion;

	cout << "\nLa nota final es: " << NotaFinal;

	return 0;

}
