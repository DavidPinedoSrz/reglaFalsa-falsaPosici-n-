#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>

using namespace std;

class Regla_Falsa
{
   double x0 = 1.6,i=0,Vn,E;
   public:
   double Fx(double);
   double Gx(double);
   double Derivada_Gx(double,int);
   double Factorial(int);
   double Coseno_Taylor(double,int);
   double DerivadaX(int);
   double DerivadaX_entre2(int);
   double Error(double,double);
   void Proceso(void);
};

double Regla_Falsa::Fx(double x0)
{
	return (cos(x0)-(x0/2)+1);
}

double Regla_Falsa::Gx(double x0)
{
    return (cos(x0)-(x0/2)+1+x0);
}

double Regla_Falsa::Derivada_Gx(double x0, int i)
{
    return(Coseno_Taylor(x0,i)+DerivadaX_entre2(i)+DerivadaX(i));
}

double Regla_Falsa::Factorial(int i)
{
    double h=1;

    if(i==0)
    {
        return 1;
    }
    else
    {
        for(;i;h*=i,i--);
        return(h);
    }
}

double Regla_Falsa::Coseno_Taylor(double x0, int i)
{
    return (pow(-1,i)*pow(x0,2*i)/Factorial(2*i));
}

double Regla_Falsa::DerivadaX(int i)
{
    if(i==0){return (1);}
    else {return 0;}
}

double Regla_Falsa::DerivadaX_entre2(int i)
{
    if(i==0) {return (0.5);}
    else {return 0;}
}

double Regla_Falsa::Error(double Vn, double x0)
{
	return (abs((Vn - x0)/Vn));
}

void Regla_Falsa::Proceso(void)
{
    Regla_Falsa A;

    if(abs(Derivada_Gx(i,x0))<1)
    {
        do
        {
           cout<<"\nITERACION NUMERO "<<i+1;
           Vn=Gx(x0);
           E=Error(Vn,x0);
		   cout<<"\n\n\t\tX0 = "<<x0<<endl;
		   cout<<"\t\tError = |("<<Vn<<" - "<<x0<<")/"<<Vn<<"|= "<<E<<endl;
		   //cout<<"\t\tf("<<x0<<")f("<<xm<<") = "<<fixed<<setprecision(6)<<raiz<<endl;
		   x0=Vn;
         i++;

        }while(E>=0.0001);

        cout<<"la raiz es: "<<Vn;
    }

    else{cout<<"No hay raiz";}
}

int main()
{

    Regla_Falsa A;
    A.Proceso();

	getch();
	return 0;
}
