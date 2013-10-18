#include <iostream>
#include<stdlib.h>
#include <math.h>
#include <ctime>
using namespace std;

void Informacion_grupo(){
    cout<<"\nCamilo Martinez P. Rut: 18767383-6 \n";
    cout<<"\nJonh Lopez S. Rut: 17382459-9 \n";
    time_t t = time(0);   // Obtiene la fecha de ahora
    struct tm * now = localtime( & t );
    cout<<"\nFecha de compilacion:";cout << (now->tm_year + 1900) << '-'<< (now->tm_mon + 1) << '-'<<  now->tm_mday<< endl;
    }

void calculo_con_limites(float grado, float v[10], float v2[10], float v3[10], int li, int ls)
{
	int i;
	for(i = 0; i<=grado; i++)
	{
		v3[i] = ((v[i]*(pow(li,v2[i]))/v2[i]) - (v[i]*pow(ls,v2[i]))/v2[i]);
    }
}


void resultado(int grado, int v3[10])
{
	float res = 0;
	for(int i=0; i<=grado; i++)
	{
		res = res + v3[i];
	}

	cout<<"El resultado de la integrales : "<<res<<endl<<endl;
}


void Crear_Polinomio(int grado, float v[10]){
int n=grado, i=0;
        while(i<=n){
     	cout<<"Ingrese el coeficiente numerico para x^"<<(n-i)<<" : ";
     	cin>> v[i]; // vector almacena todos los cof numerico del polinomio
        i++;
    }
}
void Mostrar_Polinomio(int grado, float v[10]){

	int i, n;
	n=grado;

   cout<<"\nEl polinomio creado es : \n";
  for(i = 0; i<= n; i++)
    {
    	if(v[i] != 0)
    	{
    	  if(v[i] != 1)
    	  {
		    	if(n-i != 0)
		         {
		         	if(n-i != 1)
		         	 {
			         	if(v[i]>0 && i >0)
			     			{
			     				cout<<"+"<<v[i]<<"x^"<<(n-i);
			     			}
			     		else
			     			{
			     				cout<<v[i]<<"x^"<<(n-i);
			     			}
			          }

			        else
			        {

			         	if(v[i]>0)
			     			{
			     				cout<<"+"<<v[i]<<"x";
			     			}
			     		else
			     			{
			     				cout<<v[i]<<"x";
			     			}
			          }
		         }
		         else
		         {
		         	if(v[i]>0)
		     			{
		     				cout<<"+"<<v[i];
		     			}
	     			else
	     				{
	     					cout<<v[i];
	     				}
	        	 }
         }
         else
         {
         	if(n-i != 0)
		         {
		         	if(v[i]>0)
		     			{
		     				cout<<"+x^"<<(n-i);
		     			}
		     		else
		     			{
		     				cout<<"-x^"<<(n-i);
		     			}
		         }
		      else
		         {
		         	if(v[i]>0)
		     			{
		     				cout<<"+"<<v[i];
		     			}
	     			else
	     				{
	     					cout<<v[i];
	     				}
	        	 }
         }
       }
    }

system("pause");
system("cls");
}

void calculo(int grado, int v2[10])
{
	int n;
	grado=n;
    for(int i = 0; i<= n; i++)
    {
    	v2[i] = n+1;
    	n--;
    }
}


void Calculo_Denominador( int grado, float v2[10]){
    // con esta funcion se pretende calcular solo la parte del denominador de esta.
    int n;
	n=grado;
    for(int i = 0; i<= n; i++){
    	v2[i] = n+1;
    	n--;
    }
}
void resultado(int grado, float v[10], float v2[10])
{
	int i;
	for(i=0; i<=grado; i++)
    {

	    	if(v[i] != 1)
	    	{
	    	   if(v[i]!= 1)
	    	    {
			    	if(v[i] > 0)
			    	{

			    		cout<<" + "<<v[i]<<"x^"<<v2[i];
			    	}
			    	else
			    	{
			    	    cout<<"  "<<v[i]<<"x^"<<v2[i];
			    	}
			    }
			    else
			    {
			       if(v[i] > 0)
			    	{
			    		//cout<<" +  "<<"x^"<<v2[i];
			    	}
			    	else
			    	{
			    	    cout<<" - "<<"x^"<<v2[i];
			    	}
			    }
		    }
		    else
		    {
		    	if(v[i]!=1)
		    	 {
		    	 	if(v[i] > 0)
			    	{
			    		cout<<"  +  "<<v[i]<<" x ";
			    	}
			    	else
			    	{
			    	    cout<<"   "<<v[i]<<" x ";
			    	}
		    	 }
			    else
				{
					if(v[i] > 0)
			    	{
			    		cout<<"  + "<<" x ";
			    	}
			    	else
			    	{
			    	    cout<<"  - "<<" x ";
			    	}
				}
		    }
    }
    cout<<"+ C ";
    cout<<endl;
}

void fraccion(float grado, float v2[10])
{
	int i;
	 for(i=0; i<=grado; i++)
     {
     	if(v2[i] != 1)
     	{
     		cout<<"   ----";
     	}
     	else
     	{
     		cout<<"       ";
     	}

     }

	 cout<<endl;
}
void den(float grado, float v2[10])
{

 	int i;
	for(i=0; i<=grado; i++)
     {
     	if(v2[i] != 1 && v2[i]!=0)
	     	{
	     		cout<<"     "<<v2[i]<<" ";
	     	}
	  	else
	     	{
	     		cout<<"       ";
	     	}

     }
     cout<<endl<<endl;
}



void resultado(int grado, float v3[10])
{
	float res = 0;
	for(int i=0; i<=grado; i++)
	{
		res = res + v3[i];
	}

	cout<<"El resultado de la integrales : "<<res<<endl<<endl;
}



main(){
char op;
int grado,li,ls;
float v[10],v2[10],v3[10];


do{
cout<<"\n\n\n  Trabajo Numero Uno Ing. Software\n\n\n";
cout<<"i.-Integracion de integral indefinida .\n";
cout<<"g.-Integracion de integral definida.\n";
cout<<"v.-Informacion del grupo .\n";
cout<<"e.-:Exit\n\n";
cin>>op;

        if ('i'==op){

                // El programa debe mostar el resultado y terminar.
                cout<<"Ingresar el grado del polinomio a integrar.\n";
                cin>> grado;
                Crear_Polinomio(grado,v);
                Mostrar_Polinomio(grado,v);
                Calculo_Denominador(grado,v2);
                resultado(grado,v,v2);
                fraccion(grado,v2);
                den(grado,v2);
                system("pause");
                system("cls");
                break;
}
        if ('g'==op){

            //  El polinomio debe ingresar con limites.
            cout<<"Ingresar el grado del polinomio a integrar.\n";
            cin>> grado;
            cout<<"Ingrese Limite inferior: ";
            cin>>li;
            cout<<"Ingrese Limite Superior: ";
            cin>>ls;
            Crear_Polinomio(grado,v);
            Mostrar_Polinomio(grado,v);
            Calculo_Denominador(grado,v2);
            calculo_con_limites(grado,v,v2,v3, li,ls);
            resultado(grado,v3);

        }
        if ('v'==op){
        // El programa debe mostrar la informacion del grupo y la fecha de compilacion.
            Informacion_grupo();
            system("pause");
            system("cls");
            break;

        }
        if ('e'==op){
            // el programa debe salir
            cout<<"Adios :)";
            system("pause");
            system("cls");
            break;

        }


} while(op<6) ;
}
