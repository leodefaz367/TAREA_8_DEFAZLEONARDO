#include <iostream>
using namespace std;
double calcularDescuento(double precio, double descuento){
	return precio*descuento;
} 
double calcularTotalPagar(double precio, double descuento1, double descuento2){
	double total;
	double d1 = calcularDescuento (precio, descuento1);
	double precioDescuento1 = precio-d1;
	double d2 = calcularDescuento (precioDescuento1, descuento2);
	total = precio - d1- d2;
	return total;
}
int main(){
	double plan, descuento1,descuento2;
	cout << "===MENU==="<< endl;
	cout<< "Precio del plan mensual"<< endl;
	cin >> plan;
	cout<< "Descuento por fidelidad (ejem: 0.15)"<< endl;
	cin >> descuento1;
	cout<< "Descuento por promocion (ejem: 0.2)"<< endl;
	cin >> descuento2;
	double totalFinal = calcularTotalPagar (plan, descuento1, descuento2);
	cout << "El total a pagar es: " << totalFinal << endl;
	return 0;
}

