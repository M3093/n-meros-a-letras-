#include <string>
#include <iostream>

using namespace std;

int main()
{
    string unidades[] = 
    {"cero", "uno", "dos" ,"tres" ,"cuatro" ,"cinco" ,
            "seis" ,"siete" ,"ocho" ,"nueve","diez"};
    string especiales[] = 
    {"once", "doce","trece","catorce", "quince",
              "diezciseis", "diecisiete", "dieciocho", "diecinueve"};
    string decenas[] = 
    {"veinte", "treinta","cuarenta","cincuenta", "sesenta",
           "setenta", "ochenta", "noventa"};
    string centenas[] =
   {"dosientos", "trecientos","cuatrocientos","quinientos", "seicientos",
           "setecientos", "ochocientos", "novecientos"};
  
    cout << "Ingrese un numero entre 0-999: ";
    int num;
    cin >> num;

    if(num>=0 && num<11)
        cout << endl << unidades[num];
    else if(num<20)
        cout << endl << especiales[num-11];
      else if(num<20)
        cout << endl << decenas[num-11];
    else if(num<1000){
        int unid = num % 10;
        int dec = num/10;
        int cent = num/10; 
        if(unid == 0)
            cout << endl << decenas[dec-2] ;
        else
            cout << endl << decenas[dec-2] <<" y " <<unidades[unid];
    }
    else
        cout << "El numero debe ser menor a 1000";

    return 0;
}
