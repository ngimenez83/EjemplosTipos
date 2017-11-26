#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::string;

int main()

{
	unsigned opcion;
	bool salir = false;
	char letra;
	int suma;
	double DivisionReal, a, b;
	string Nombre, Apellido;

	do
	{
		cout << "Elija la operacion que desea realizar.\n";
		cout << "1. Suma.\n";
		cout << "2. Division.\n";
		cout << "3. Minusculas a mayusculas y viceversa.\n";
		cout << "4. Nombre y apellido.\n";
		cout << "0. Salir.\n\n";
		cout << "Opcion: ";
		cin >> opcion;

		switch (opcion)
		{

		case 1:
            {
            int a,b;            //variables locales a este caso
			cout << "Ingrese un numero: ";
			cin >> a;
			cout << "Ingrese otro numero: ";
			cin >> b;
			suma = a + b;
			cout << "La suma es: " << suma << "\n\n";
			break;
            }
		case 2:

			cout << "Ingrese un numero: ";
			cin >> a;
			cout << "Ingrese otro numero: ";
			cin >> b;
			DivisionReal= a / b;
			cout << "El cociente es: " <<DivisionReal<<"\n\n";
			break;

		case 3:

			cout << "Ingrese una letra minuscula o mayuscula: ";
			cin >> letra;

			if (letra >= 'a' and letra <= 'z')
			{
				letra -= 'a' - 'A';
				cout << "La letra en mayuscula es: "<<letra<<"\n\n";
			}
                else if (letra >= 'A' and letra <= 'Z')
                {
                    letra -= 'A' - 'a';
                    cout << "La letra en minuscula es: "<<letra<<"\n\n";
                }
                    else
                        cout<< "No ha ingresado una letra.\n\n";

			break;

		case 4:

			cout << "Ingrese su nombre: ";
            cin >> Nombre;
			cout << "Ingrese su apellido: ";
			cin >> Apellido;
			cout << "Su nombre completo es: " << (Nombre + " " + Apellido) << "\n\n";
			break;

		case 0:

			salir = true;
			cout << "Hasta la proxima.";
			break;
		default:
			cout << "Opcion incorrecta, elija otra. \n\n";
			break;

		}
	} while (!salir);

}
