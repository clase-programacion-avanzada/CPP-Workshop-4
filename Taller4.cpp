#include "libs/TextFileHandler.h"
#include "libs/List.h"
#include "libs/BinaryFileHandler.h"
#include "libs/Product.h"

#include <iostream>

using namespace std;

void printMenu();

int main() {
    
    printMenu();


    int option = 0;
    
    List<Product> products;
    string textFileName = "productos.txt";
    string binaryFileName = "productos.bin";
    TextFileHandler textFileHandler(textFileName);
    BinaryFileHandler<ProductBinary> binaryFileHandler(binaryFileName);
    List<string> lines;


    do {
        //cout << "Ingrese una opción: ";
        //cin >> option;
        option = 1;

       switch (option)
        {
            case 1:
                cout << "Leyendo desde el archivo de texto..." << endl;
                lines = textFileHandler.readLines();
                //Convertir de string a Product
                products = toProductList(lines);
                //binaryFileHandler.writeBinaryFile(toProductBinaryList(products));
                //writeBinaryFile(products, binaryFileName);

                break;
            case 2:
                cout << "Opción 2" << endl;
                break;
            case 3:
                cout << "Opción 3" << endl;
                break;
            case 4:
                cout << "Opción 4" << endl;
                break;
            case 5:
                cout << "Opción 5" << endl;
                break;
            case 0:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción inválida" << endl;
                break;
        } 

        option++;

        if (option == 6) {
            option = 0;
        }

    } while (option != 0);
    
    return 0;
}

void printMenu() {
    cout << "1. Leer productos desde un archivo de texto y crear un archivo binario" << endl;
    cout << "2. Mostrar productos del archivo binario" << endl;
    cout << "3. Agregar un producto al archivo binario" << endl;
    cout << "4. Borrar un producto del archivo binario" << endl;
    cout << "5. Buscar productos por nombre y fecha de vigencia" << endl;
    cout << "0. Salir" << endl;
}
