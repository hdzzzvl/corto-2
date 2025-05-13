#include <iostream>
using namespace std;

int main(){
    int edad, cliente, hamburguesa=8, pizza=7, almuerzo=10, sopa=6, plato=9, postre=5, opcion;
    float saldo=7;
    double descuento, descuento1, descuento2, vuelto, vuelto1, vuelto2, faltante;
    cout<<"Bienvenido al supermercado\ningrese su edad"<<endl;
    cin>>edad;
    if(edad>=12){
    cout<<"Puede proceder"<<endl;
    } else {
        cout<<"No puede continuar con la compra"<<endl;
        return 1;
    }
    cout<<"Ingrese su tipo de cliente\n1.Estudiante\n2.Adulto mayor\n3.Ver todo"<<endl;
    cin>>cliente;
    switch(cliente){
        case 1:
        descuento=hamburguesa-hamburguesa*0.25;
        descuento1=pizza-pizza*0.25;
        descuento2=almuerzo-almuerzo*0.25;
        cout<<"Usted cuenta con un descuento del 25%\nLos platos disponibles son:\n1.Combo hamburguesa: $8\n2.Combo Pizza Personal: $7\n3.Almuerzo ejecutivo: $10"<<endl;
        cout<<"Sus platos con descuento quedan con el precio de:"<<endl;
        cout<<"1.Combo hamburguesa: $"<<descuento<<endl;
        cout<<"2.Combo pizza personal: $"<<descuento1<<endl;
        cout<<"3.Almuerzo ejecutivo: $"<<descuento2<<endl;

        break;

        case 2:
        descuento=sopa-sopa*0.30;
        descuento1=plato-plato*0.30;
        descuento2=postre-postre*0.30;
        cout<<"Usted cuenta con un descuento del 30%\nLos platos dispoibles son:\n1.Sopa Nutritiva: $6\n2.Plato Casero: $9\n3.Postre + Cafe: $5"<<endl;
        cout<<"Sus platos con descuento quedan con el precio de:"<<endl;
         cout<<"1.Sopa Nutritiva: $"<<descuento<<endl;
        cout<<"2.Plato Casero: $"<<descuento1<<endl;
        cout<<"3.Postre + Cafe: $"<<descuento2<<endl;
        cin>>opcion;
        switch(opcion){
            case 1:
            vuelto=saldo-descuento;
            vuelto1=saldo-descuento1;
            vuelto2=saldo-descuento2;
            if(saldo>descuento){
                cout<<"Su saldo restante es: $"<<vuelto<<endl;
            }else if(saldo>descuento1){
                cout<<"Su saldo restante es: $"<<vuelto1<<endl;

            }else if(saldo>descuento2){
                cout<<"su saldo restante es: $"<<vuelto2<<endl;

            }else{
                cout<<"su saldo es insuficiente"<<endl;
            }
            



        }

        break;

        case 3:
        cout<<"Los platos disponibles son: \n1.Combo hamburguesa: $8\n2.Combo Pizza Personal: $7\n3.Almuerzo ejecutivo: $10\n4.Sopa Nutritiva: $6\n5.Plato Casero: $9\n6.Postre + Cafe: $5"<<endl;
        break;

        default:
        cout<<"Opcion no valida"<<endl;
        break;




        



        










    }





    









    return 0;
}