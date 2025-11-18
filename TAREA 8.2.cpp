#include <iostream>
using namespace std;

void ingresarDatos(double precios[], int n){
	int i;
	cout<< "Ingrese los precios de cada producto"<< endl;
	for (i = 0; i < n; i++){
		cout<< "Ingrese el precio: "<< endl;
		cin>> precios[i];
	}
}

void encontrarMayorMenor(double precios[], int n, double &mayor, double &menor){
    mayor = precios[0];
    menor = precios[0];

    for (int i = 1; i < n; i++) {
        if (precios[i] > mayor){
            mayor = precios[i];
        }
        if (precios[i] < menor){
            menor = precios[i];
        }
    }
}
void mostrarDatosProgramador(){
	cout<< "NOMBRE: LEONARDO DEFAZ"<< endl;
	cout<< "18 AÑOS"<< endl;
	cout<< "TELEFONO: 0998218356"<< endl;
	cout<< "ID: 1753675454"<< endl;
}

void calcularDescuento(){
	string producto;
	double precio;

	cout<< "Ingrese el nombre del producto"<< endl;
	getline(cin >> ws, producto);  

	cout<< "Ingrese el precio"<< endl;
	cin>> precio;

	if (precio > 1000) {
        double final = precio * 0.9;
        cout << "Precio final con descuento: " << final << endl;
    } 
	else {
        cout << "No aplica descuento. Precio final: " << precio << endl;
    }
}

int main(){
	int n = 8;
	double precios[n];
    double mayor, menor;

    ingresarDatos(precios, n);
    encontrarMayorMenor(precios, n, mayor, menor);

    cout << "El precio mayor es: " << mayor << endl;
    cout << "El precio menor es: " << menor << endl;

    mostrarDatosProgramador();
    calcularDescuento();

    return 0;
}

