#include <iostream>
using namespace std;

void modificarValor(int arr[], int &suma, int posc) {
    int nuevoValor;
    cout << "Ingrese el valor: ";
    cin >> nuevoValor;
    suma = suma - arr[posc] + nuevoValor;
    arr[posc] = nuevoValor;
    cout << "Valor modificado correctamente"<< endl;
}

int main(){
    int arr[5], i, suma = 0, opcion, cantidad = 0;
    do{
        cout<< "----MENU----"<<endl;
        cout<< "1. Ingrese valores"<<endl;
        cout<< "2. Sumar Valores"<<endl;
        cout<< "3. Modificar una posicion"<<endl;
        cout<< "4. Salir"<<endl;
        cout<< "Escoja una opcion"<< endl;
        cin>> opcion;

        switch(opcion){
            case 1:{
                suma = 0;
                cantidad = 0;

                for (i = 0; i < 5; i++){
                    cout<< "Escriba un numero entero "<< endl;
                    cin>> arr[i];
                    suma += arr[i];
                    cantidad++;
                }
                cout<< "El arreglo se lleno correctamente"<<endl;
                break;
            }
            case 2:{
                if (cantidad == 0){
                    cout<< "Arreglo vacio, primero ingrese valores"<< endl;
                    break;
                }
                cout<< "La suma de los numeros es de: "<< suma<< endl;
                break;
            }
case 3: {
                if (cantidad == 0){
                    cout<< "Arreglo vacio, no se puede modificar"<< endl;
                    break;
                }

                int posc;
                cout<< "Modificar posicion"<< endl;
                while (true){
                    cout<< "Ingrese una posicion de 0 a 4"<< endl;
                    cin>> posc;
                    if (posc < 0 || posc > 4){
                        cout<< "Indice invalido pruebe otra vez"<< endl;
                    }
                    else{
                        modificarValor(arr, suma, posc);
                        break;
                    }
                }
                break;
            }

            case 4:{
                cout<< "Saliendo del programa";
                break;
            }

            default:
                cout << "Opcion invalida, intente de nuevo";
                break;
        }
    } while (opcion != 4);

    return 0;
}

