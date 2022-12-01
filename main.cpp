#include <iostream>
#include <math.h>

using namespace std;

int main()

{
    int somma, sottrazione, prodotto, num, num1, num2;
    float divisione, radice;
    char risposta;

    cout<<"Che operazione si vuole eseguire? (1=somma, 2=sottrazione, 3=prodotto, 4=divisione, 5=radice quadrata): ";
    cin>>num;

    
    if (num==1)
    {
        cout<<"Inserire il primo numero: ";
        cin>>num1;
        cout<<"Inserire il secondo numero: ";
        cin>>num2;
        somma=num1+num2;
        cout<<"Il risultato e': "<<somma<<endl;
    }
    
    if (num==2)
    {
        cout<<"Inserire il primo numero: ";
        cin>>num1;
        cout<<"Inserire il secondo numero: ";
        cin>>num2;
        sottrazione=num1-num2;
        cout<<"Il risultato e': "<<sottrazione<<endl;
    }

    if (num==3)
    {
        cout<<"Inserire il primo numero: ";
        cin>>num1;
        cout<<"Inserire il secondo numero: ";
        cin>>num2;
        prodotto=num1*num2;
        cout<<"Il risultato e': "<<prodotto<<endl;
    }

    if (num==4)
    {
        cout<<"Inserire il primo numero: ";
        cin>>num1;
        cout<<"Inserire il secondo numero: ";
        cin>>num2;
        divisione=num1/num2;
        cout<<"Il risultato e': "<<divisione<<endl;
    }
    
    if (num==5)
    {
        cout<<"Inserire un numero: ";
        cin>>num1;
        radice=sqrt(num1);
        cout<<"Il risultato e': "<<radice<<endl;
    }

    cout<<"Si vuole eseguire un altro calcolo? (S/N)";
    cin>>risposta;

    while((risposta=='S')||(risposta=='s'))
    {
        cout<<"Che operazione si vuole eseguire? (1=somma, 2=sottrazione, 3=prodotto, 4=divisione, 5=radice quadrata): ";
    cin>>num;

    if (num==1)
    {
        cout<<"Inserire il primo numero: ";
        cin>>num1;
        cout<<"Inserire il secondo numero: ";
        cin>>num2;
        somma=num1+num2;
        cout<<"Il risultato e': "<<somma<<endl;
    }
    
    if (num==2)
    {
        cout<<"Inserire il primo numero: ";
        cin>>num1;
        cout<<"Inserire il secondo numero: ";
        cin>>num2;
        sottrazione=num1-num2;
        cout<<"Il risultato e': "<<sottrazione<<endl;
    }

    if (num==3)
    {
        cout<<"Inserire il primo numero: ";
        cin>>num1;
        cout<<"Inserire il secondo numero: ";
        cin>>num2;
        prodotto=num1*num2;
        cout<<"Il risultato e': "<<prodotto<<endl;
    }

    if (num==4)
    {
        cout<<"Inserire il primo numero: ";
        cin>>num1;
        cout<<"Inserire il secondo numero: ";
        cin>>num2;
        divisione=num1/num2;
        cout<<"Il risultato e': "<<divisione<<endl;
    }
    
    if (num==5)
    {
        cout<<"Inserire un numero: ";
        cin>>num1;
        radice=sqrt(num1);
        cout<<"Il risultato e': "<<radice<<endl;
    }
    
    cout<<"Si vuole eseguire un altro calcolo? (S/N)";
    cin>>risposta;

    }
    
    
     return 0;
}