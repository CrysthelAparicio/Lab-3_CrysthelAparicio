#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
using std::cout;
using std::cin;
using std::string;
using std::endl;

void MergeSort(int*,int,int);
void mentesMaestras();

int main()
{
        int opcion = -1;
        do
        {
                cout << "\nMENU:\n"
                        << "1) Ejercicio 1\n"
                        << "2) Ejercicio 2\n"
                        << "3) Ejercicio 3\n"
                        << "0) Salir\n"
                        << "Ingrese una opcion: ";
                cin >> opcion;
                switch (opcion)
                {
                        case 1:
			mentesMaestras();			                                
                                break;
                        case 2:
                                
                                break;
                        case 3:
        
		         {
        int n, i;
        cout<<"\nIngrese la cantidad de elementos que seran sorteados :D :  ";
        cin>>n;

        int arr[n];
        for(i = 0; i < n; i++)
        {
                cout<<"Ingrese Elemento: "<<i+1<<": ";
                cin>>arr[i];
        }

        MergeSort(arr, 0, n-1);

        // Imprimiendo el elemento sorteado!
        cout<<"\nSorted Data ";
        for (i = 0; i < n; i++)
        cout<<" -> "<< arr[i];

        return 0;

                        }

                               break;
                        case 0:
                                cout << "Saliendo... " << endl;
                                break;
                        default:
                                cout << "Opcion no valida!" << endl;
                                break;
                }
        }
        while (opcion != 0);
        return 0;

}

 // Una funcion para unir los dos medios en un dato ordenado!
void Merge(int *a, int low, int high, int mid)
{
        // Tenemos bajo a medio y medio + 1 a alto ya ordenado.
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;
 
	// El merge de dos partes dentro del temp[]
	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
 
	// Inserto todos los valores de i dentro del temp[]
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
 
	// Inserto todos los valores de j dentro del temp[]
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
 
 
	// Asigno el sorteo data en el  temp[] a a[].
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}
 
// Funcion que parte el array en 2 partes
void MergeSort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		// Parto a la mitad
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);
 
		// Los combino para obtener salida ordenada
		Merge(a, low, high, mid);
	}
}

//////////////////////////////////////////

//EJERCICIO 1
void mentesMaestras(){
        srand(time(NULL));
        int random = 10000+rand()%(99999-10000);
        int contadorTurnos = 5;
        string cadenaRand = to_string(random);
        string subcadenaingresada1;
        string numero;
        int contIguales = 0;
        cout<<"Numero Random: "<<cadenaRand<<endl;

        while(contadorTurnos!=0){
                cout<<"Tiene "<<contadorTurnos<<" oportunidades par adivinar el numero"<<endl;
                cout<<"Escriba lo que desea modificar: "<<endl;
                cin>>numero;
                while(numero.length()<5){
                        cout<<"Ingrese un numero de 5 digitos: "<<endl;
                        cin>>numero;
                }

                if(numero.compare(cadenaRand)==0){
                        cout<<"Adivino todos los numeros! "<<endl;
                        contadorTurnos = 0;
                }else{
                        for(int i=0; i<cadenaRand.length();i++){
                                for(int j=0; j<numero.length();i++){
                           /*   if(){
                                contIguales++;
                                }*/
                                }
                        }
                        cout<<"Tiene "<<contIguales<<" numeros iguales"<<endl;
                        c
                }
                contadorTurnos--;
        }
  }

//EJERCICIO 2

void factorizacion() 
	{
		string ch;
		int pos = 0, cont=0;
		string a,b,c;
		int A,B,C;
		cout << "Ingrese el Polinomio: "<<endl;
		cin>>ch;

		for(int i = 0; i < ch.length; i++){
			if((ch[i] == 'x') && (cont == 0)){
			
		} 
	}
		
	
	}

/////////////


