#include<iostream>
#include<math.h>
using namespace std;
float Calculo();
int main(){
	cout<<"------BIENVENIDO!!!------"<<endl;
	Calculo();
	return 0;
}
float Calculo(){
	float a,b,c,x1=0,x2=0;
	cout<<"Digite valor de a: "<<endl;cin>>a;
	cout<<"Digite valor de b: "<<endl;cin>>b;
	cout<<"Digite valor de c: "<<endl;cin>>c;
	x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	cout<<"X1: "<<x1<<endl;
	cout<<"X2: "<<x2<<endl;
	return (x2);
}
