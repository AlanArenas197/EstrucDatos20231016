#include <iostream>
#include <iomanip>

using namespace std;

void quicksort(double x[], int lb, int ub);
void swap(double &a, double &b);

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos en el arreglo: ";
    cin >> n;

    double x[n];

    cout << "Ingrese los elementos del arreglo:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "x[" << i << "]= ";
        cin >> x[i];
    }
    system("cls");
    cout << "Arreglo Original:" << endl;
    for (int i = 0; i < n; i++) {
        cout << x[i] << setw(5);
    }

    quicksort(x, 0, n - 1);

    cout << endl << "Arreglo Ordenado por QuickSort:" << endl;
    for (int i = 0; i < n; i++) {
        cout << x[i] << setw(5);
    }
    return 0;
}

void quicksort(double x[], int lb, int ub) {
    int abajo = lb;
    int arriba = ub;
    double A = x[lb];  // Pivote

    do {
        while (x[abajo] < A) {
            abajo++;
        }
        while (x[arriba] > A) {
            arriba--;
        }
        if (abajo <= arriba) {
            swap(x[abajo], x[arriba]);
            abajo++;
            arriba--;
        }
    } while (abajo <= arriba);

    if (arriba > lb) {
        quicksort(x, lb, arriba);
    }
    if (abajo < ub) {
        quicksort(x, abajo, ub);
    }
}

void swap(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}


/*#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
void quicksort(double [20],int, int);
void escribir(double [20],int );
int main()
{
    int i,nro;
    double B[20];

    cout<< "Ingrese la dimension del arreglo: ";
    cin >> nro;
    cout << endl;
    cout << "Ingrese elementos del arreglo:" << endl;
    for(i=0;i<nro;i++)
    {
        cout<<"B["<<i<<"]= ";
        cin>>B[i];
    }
    system("cls");
    cout << "ARREGLO ORIGINAL" << endl << endl;
    for(i=0;i<nro;i++)
    {
        cout << B[i] << setw(5);
    }
    quicksort(B,0,nro-1);
    escribir(B,nro);
    return 0;
}
void quicksort(double A[20],int primero,int ultimo)
{
    int central,i,j;
    double pivote;
    central=(primero+ultimo)/2;
    pivote=A[central];
    i=primero;
    j=ultimo;
    do
        {
            while(A[i]<pivote) i++;
            while(A[j]>pivote) j--;
            if(i<=j)
            {
                double temp;
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
                i++;
                j--;
            }
        }
    while(i<=j);
    if(primero<j)
        quicksort(A,primero,j);
    if(i<ultimo)
        quicksort(A,i,ultimo);
}
void escribir(double A[20], int n)
{
    int i;
    cout << endl << "ARREGLO ORDENADO" << endl << endl;
    for(i=0;i<n;i++)
    {
        cout << A[i] << setw(5);
    }
    cout << endl << endl;

}
*/
