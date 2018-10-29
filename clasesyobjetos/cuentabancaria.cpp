//
//  main.cpp
//  clasesyobjetos
//
//  Created by Jose Antonio on 30/01/18.
//  Copyright © 2018 Jose Antonio. All rights reserved.
//

#include <iostream>
#include <string>
#include "cuentabanc.h"
using namespace std;
int main() {
    CuentaBanc cuenta;
    string nombre;
    double saldo, cantidad, saldofinal;
    int casos, retira, continuar;
    cout << "nombre del tarjetahabiente" << endl;
    getline(cin, nombre);
    cuenta.setNombre(nombre);
    cout << "ingrese saldo inicial" << endl;
    cin >> saldo;
    cuenta.setSaldo(saldo);
    cout << "presiona 1 para depositar" << endl;
    cout << "presiona 2 para retirar" << endl;
    cout << "presiona 3 para consultar saldo" << endl;
    cout << "presiona 4 para salir" << endl;
    do{
        cin >> casos;
        switch (casos)
        {
            case 1:
                cout << "saldo a depositar" << endl;
                cin >> cantidad;
                cuenta.deposita(cantidad);
                continuar=0;
                break;
            case 2:
                cout << "saldo a retirar" << endl;
                cin >> cantidad;
                continuar=0;
                retira=cuenta.retira(cantidad);
                if (retira==0){
                    cout << "transaccion no exitosa" << endl;
                }
                    else
                      cout << "transaccion exitosa" << endl;
                break;
            case 3:
                saldofinal=cuenta.getSaldo();
                continuar=0;
                cout << nombre << " tu saldo es  de " << saldofinal << endl;
                break;
            case 4:
                continuar=1;
                break;
            default:
                cout << "opcion no valida" << endl;
                continuar=0;
        }
        
    }while (continuar==0);

    return 0;
}
