#include <iostream>
#include <fstream>
#include <string>
#include "filesystem"
#include <windows.h>

using namespace std;

int main()
{
    int cantidad;

    cout << "Cuantos archivos quiere crear \n";
    cin >> cantidad;
    crearArchivos(cantidad);
    cout << contarArchivosDeDirectorio();
    cout << endl;
    listarArchivosDeDirectorio();
    mostrarDetalles();

    return 0;
}

void crearArchivos(int cantidad) {
    string nombreArchivo="archivo";
    int i= cantidad;
    for(i=0; i<cantidad; i++){
        ofstream file;
        file.open("C:/Users/JP/Desktop/progra/" + nombreArchivo + to_string(i) +".txt");
        file << "primera línea\n";
        file << "segunda línea\n";
        file << "tercera línea\n";
        file.close();
    }
    cout<<"Archivos creados : " + to_string(i);

