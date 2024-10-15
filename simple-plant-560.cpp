
#include <bits/stdc++.h>
using namespace std;

int main() {
	cout<<"ingrese los valores de A,B,C\n";
	long long a,b,c;
	cin>>a>>b>>c;
	float x=pow(b,2)-(4*a*c);
	if(x<0){
		x=x*-1;
		x=sqrt(x);
		x=x*-1;
	}
	else{
		x=sqrt(x);
	}
	long double x1=pow(b,2)-(4*a*c);
		if(x1<0){
		x1=x1*-1;
		x1=sqrt(x1);
		x1=x1*-1;
	}
	else{
		x1=sqrt(x1);
	}
	x/=2;
	x1/=2;
	cout<<fixed<<setprecision(4)<<"el valor minimo: "<<x-b<<endl<<"el valor maximo: "<<x1+b;
}
