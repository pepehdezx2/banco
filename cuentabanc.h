//
//  cuentabanc.h
//  clasesyobjetos
//
//  Created by Jose Antonio on 30/01/18.
//  Copyright © 2018 Jose Antonio. All rights reserved.
//

#ifndef cuentabanc_h
#define cuentabanc_h
using namespace std;
class CuentaBanc{
public:
    CuentaBanc();
    CuentaBanc(double sa, string no);
    double getSaldo();
    string getNombre();
    void setSaldo(double sa);
    void setNombre (string no);
    bool retira (double cr);
    void deposita (double cd);
private:
    string nombre;
    double saldo;
};
CuentaBanc::CuentaBanc(){
    nombre = " ";
    saldo = 0;
}
CuentaBanc::CuentaBanc(double sa, string no){
    saldo = sa;
    nombre = no;
}
bool CuentaBanc::retira(double cr){
    bool suficiente=1;
    if (saldo>=cr)
        saldo-=cr;
    else
        suficiente=0;
    return suficiente;
}
void CuentaBanc:: deposita(double cd){
    saldo+=cd;
}
void CuentaBanc:: setSaldo(double sa){
    saldo=sa;
}
void CuentaBanc::setNombre(string no){
    nombre=no;
}
double CuentaBanc:: getSaldo(){
    return saldo;
}
string CuentaBanc:: getNombre(){
    return nombre;
}

#endif /* clasea_h */
