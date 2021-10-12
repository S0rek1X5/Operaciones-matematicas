#include<iostream>
#include<math.h>
using namespace std;
float Calculo_Hipotenusa();
float Calculo_Cateto();
int main(){
	char opc[1];
	cout<<"BIENVENIDO"<<endl;
	cout<<"Digite H para encontrar la HIPOTENUSA - C para encontrar el CATETO"<<endl;cin>>opc;
	if(opc[0]=='H' || opc[0]=='h'){
		Calculo_Hipotenusa();
	}
	else if(opc[0]=='C' || opc[0]=='c'){
		Calculo_Cateto();
	}
	else{
		cout<<"Usted ha digitado un caracter no registrado"<<endl;
	}
	return 0;
}
float Calculo_Hipotenusa(){
    float Cateto1, Cateto2, Hipotenusa;
	cout<<"Digite su cateto a: "<<endl;cin>>Cateto1;
	cout<<"Digite su cateto b: "<<endl;cin>>Cateto2;
	Hipotenusa=sqrt(pow(Cateto1,2)+pow(Cateto2,2));
	cout<<"La Hipotenusa de su triangulo es: "<<Hipotenusa<<endl;
	return Hipotenusa;
}
float Calculo_Cateto(){
	float Cateto1, Cateto2, Hipotenusa;
	cout<<"Digite su Hipotenusa: "<<endl;cin>>Hipotenusa;
	cout<<"Digite su Cateto: "<<endl;cin>>Cateto1;
	Cateto2=sqrt(pow(Hipotenusa,2)-pow(Cateto1,2));
	cout<<"El cateto es: "<<Cateto2<<endl;
	return Cateto2;
}
