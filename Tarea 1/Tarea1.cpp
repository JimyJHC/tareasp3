/*
Cree una aplicación de calculadora del BMI que lea el peso del usuario en libras y la altura en pulgadas (0,
si lo prefiere, el peso del usuario en kilogramos y la altura en metros), para que luego calcule y muestre el
índice de masa corporal del usuario.
*/
#include <iostream>
using namespace std;

int main (){

int opcion;
double peso=0,altura=0,BMI=0;
string obsvc="";


cout<<"Elija las unidades de medida en las que desea ingresar sus datos: \n";
cout<<"1) Peso en LIBRAS y altura en PULGADAS \n";
cout<<"2) Peso en KILOGRAMOS y altura en METROS \n\n";
cout<<"Elija una opcion e ingrese el numero correspondiente: (1 o 2) \n";
cin>>opcion;



   
if(opcion<2 && opcion>0){

     cout<<"Calculadora de BMI\n\n";
cout<<"Ingrese su peso en libras: \n";
cin>>peso;
cout<<"\n";

cout<<"Ingrese su altura en pulgadas: \n";
cin>>altura;
cout<<"\n";

BMI=(peso*703)/(altura*altura);

if(BMI<18.5){
    obsvc="BAJO PESO";
} else if (BMI>=18.5 && BMI<25){
    obsvc="NORMAL";
} else if (BMI>=25 && BMI<30){
    obsvc="SOBREPESO";
} else if (BMI >=30){
    obsvc="OBESO";
}

cout<<"Su Indice de Masa Corporal (BMI) es de "<<BMI<<" unidades.\n";
cout<<"Su BMI corresponde a la categoria: "<<obsvc<<endl;
cout<<"\n\n";

cout<<"Valores de BMI\n\n";
cout<<"Bajo peso: menos de 18.5\n";
cout<<"Normal: entre 18.5 y 24.9\n";
cout<<"Sobrepeso entre 25 y 29.9\n";
cout<<"Obeso: 30 o mas\n";


} else  if (opcion>1 && opcion<3){

cout<<"Ingrese su peso en kilogramos: \n";
cin>>peso;
cout<<"\n";

cout<<"Ingrese su altura en metros: \n";
cin>>altura;
cout<<"\n";

BMI=(peso)/(altura*altura);

if(BMI<18.5){
    obsvc="BAJO PESO";
} else if (BMI>=18.5 && BMI<25){
    obsvc="NORMAL";
} else if (BMI>=25 && BMI<30){
    obsvc="SOBREPESO";
} else if (BMI >=30){
    obsvc="OBESO";
}

cout<<"Su Indice de Masa Corporal (BMI) es de "<<BMI<<" unidades.\n";
cout<<"Su BMI corresponde a la categoria: "<<obsvc<<endl;
cout<<"\n\n";

cout<<"Valores de BMI\n\n";
cout<<"Bajo peso: menos de 18.5\n";
cout<<"Normal: entre 18.5 y 24.9\n";
cout<<"Sobrepeso entre 25 y 29.9\n";
cout<<"Obeso: 30 o mas\n";


} else {
    cout<<"ERROR, ingreso un numero incorrecto, reinicie e intente de nuevo.";
  
}






    return 0;
}