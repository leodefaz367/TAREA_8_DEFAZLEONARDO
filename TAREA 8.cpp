#include <iostream>
using namespace std;
double IVA = 0.15;
double ICE_TV = 0.15;
double INSTALACION_BASE = 120.00;
void mostrarMenu() {
    cout << "MENU CLARO EP" << endl;
    cout << "1. Telefonia Fija: $7.99 mensuales" << endl;
    cout << "2. TV Satelital: $28.50 mensuales" << endl;
    cout << "3. Internet Hogar: $18.00 mensuales" << endl;
    cout << "4. Salir" << endl;
    cout << "Seleccione una opcion: " << endl;
}

void metodoPago() {
    cout << endl << "Metodo de pago para instalacion:" << endl;
    cout << "1. Tarjeta de credito (50% desc.)" << endl;
    cout << "2. Efectivo (10% desc.)" << endl;
    cout << "3. Otro metodo (sin descuento)" << endl;
    cout << "Seleccione opcion: " << endl;
}

double aplicacionDescuentoInstalacion(int opcionPago) {
    if (opcionPago == 1){
        return INSTALACION_BASE * 0.5;
	}
    if (opcionPago == 2){
        return INSTALACION_BASE * 0.1;
	}
    return 0;
}

double terceraEdad(double servicio) {
    int edad;
    cout << "Ingrese su edad: " << endl;
    cin >> edad;
    if (edad > 65) {
        double descuento = servicio * 0.5;
        cout << "Descuento por tercera edad: " << descuento << endl;
        return descuento;
    } 
    cout << "No posee descuento por tercera edad" << endl;
    return 0;
}

void telefonia(double servicio) {
    cout << endl << "--- Telefonia Fija ---" << endl;
    double iva = servicio * IVA;
    double totalServicio = servicio + iva;
    cout << "Precio mensual (con IVA): " << totalServicio << endl;
    int opcionPago;
    metodoPago();
    cin >> opcionPago;
    double descuentoInst = aplicacionDescuentoInstalacion(opcionPago);
    double costoInstalacion = INSTALACION_BASE - descuentoInst;
    double descuento3ra = terceraEdad(servicio);
    double totalFinal = totalServicio - descuento3ra + costoInstalacion;
    cout << "Costo instalacion final: " << costoInstalacion << endl;
    cout << "Total a pagar: " << totalFinal << endl;
}

void TVSatelital(double servicio) {
    cout << endl << "--- TV Satelital ---" << endl;
    double iva = servicio * IVA;
    double ice = servicio * ICE_TV;
    double totalServicio = servicio + iva + ice;
    cout << "Precio mensual (IVA + ICE): " << totalServicio << endl;
    int opcionPago;
    metodoPago();
    cin >> opcionPago;
    double descuentoInst = aplicacionDescuentoInstalacion(opcionPago);
    double costoInstalacion = INSTALACION_BASE - descuentoInst;
    double descuento3ra = terceraEdad(servicio);
    double totalFinal = totalServicio - descuento3ra + costoInstalacion;
    cout << "Costo instalacion final: " << costoInstalacion << endl;
    cout << "Total a pagar: " << totalFinal << endl;
}

void Internet(double servicio) {
    cout << endl << "--- Internet Hogar ---" << endl;

    double iva = servicio * IVA;
    double totalServicio = servicio + iva;
    cout << "Precio mensual (con IVA): " << totalServicio << endl;
    int opcionPago;
    metodoPago();
    cin >> opcionPago;
    double descuentoInst = aplicacionDescuentoInstalacion(opcionPago);
    double costoInstalacion = INSTALACION_BASE - descuentoInst;
    double descuento3ra = terceraEdad(servicio);
    double totalFinal = totalServicio - descuento3ra + costoInstalacion;
    cout << "Costo instalacion final: " << costoInstalacion << endl;
    cout << "Total a pagar: " << totalFinal << endl;
}

int main() {
    int opcion;
    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                telefonia(7.99);
                break;
            case 2:
                TVSatelital(28.50);
                break;
            case 3:
                Internet(18.00);
                break;
            case 4:
                cout << endl << "Saliendo del programa" << endl;
                break;
            default:
                cout << endl << "Opcion invalida" << endl;
        }

    } while (opcion != 4);

    return 0;
}



