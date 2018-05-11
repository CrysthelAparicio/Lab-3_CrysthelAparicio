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

int* crearArray(int);
int* leerElementos(int*,int);
void printArray(int*,int);
void metodo(); //lo hace random
void MergeSort(int*,int,int);
void juego();
void factorizacion();
void e1();

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
			juego();			                                
                                break;
                        case 2:
			factorizacion();
                                
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
 int* crearArray(int size){
        int* retvalue=new int [size];
        return retvalue;
}
int* leerElementos(int* array,int size){
        int num, c;
    srand(time(NULL));

    for(c = 1; c <= size; c++)
    {
        num = 1 + rand() % (10 - 1);
        array[c]=num;
    }
    return array;
}


void printArray(int* array, int size){
        for (int i=0;i<size;i++){

        cout<<" "<<array[i];
        }
        cout<<endl;
}

	 void metodo(){
	 int* arrayMerge;

	 arrayMerge= crearArray(size);
	printArray = leerElementos(array,size);
 }
//EJERCICIO 1
 void e1(){

int* array_p;
int size=5;


array_p=crearArray(size);

array_p=leerElementos(array_p,size);

printArray(array_p,size);
int cont=0;
string cadena;
while(cont<=5){
        cout<<"Su turno "<<cont<<endl;
        cout<<"Ingrese la cadena de numeros:"<<endl;
        cin>>cadena;
        int size_cadena=cadena.length();

        while(size_cadena!=5){
        cout<<"MAl, ingrese de nuevo"<<endl;
        cin>>cadena;
        size_cadena=cadena.length();
        }


        cont++;
        int opcion=juego(array_p,cadena);

}



}

int juego(int* array, string cadena){
        int temp2,temp1;
        char x,z;
        string tempo;
        int cont=0;

        for(int i=0;i<=5;i++){
                temp1=array[i];

                for(int y=0;y<=cadena.length();y++){
                        tempo=cadena[y];
                        temp2=atoi(tempo.c_str());


                        if(temp2==temp1){
                                cont++;
                        }

                }
        }
        cout<<"Felicidades estos coinciden "<< cont-1<<" digitos"<<endl;


return 0;
}


             

///////////////////////////////////////7
// EJERCICIO 2
	void factorizacion() {
        string cadena;
        string a,b,c;
	int A,B,C;
        int pos = 0 ,cont = 0;
        int pos2 = 0;
        cout<<"Ingrese el Polinomio que desea ver: "<<endl;
        cin>>cadena;

        for(int i = 0; i < cadena.length(); i++) {
                if((cadena[i] == 'x') && (cont == 0)){
                                pos = i;

                                cont++;
                }

                if ((cadena[i] == 'x') && (cont == 1)) {
                        pos2 = i;

                        cont++;
                }

        }

        for(int i = 0; i < pos; i++) {

                a += cadena[i];
        }

        for(int i = 0; i < pos2; i++) {

                b += cadena[i];
        }

        for(int i = pos2; i < cadena.length(); i++) {

                c += cadena[i];
        }

        cout<<a<<endl;

}

