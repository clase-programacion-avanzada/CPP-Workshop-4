#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include "List.h"


using namespace std;

struct Product {
  string storeName;
  string storeURL;
  string productName;
  string datePromotionPeriod; //Format dd/mm/yyyy
  double price;
};

//structure to store the product in a binary file
struct ProductBinary {
  char storeName[50];
  char storeUrl
};

bool dateIsGreaterOrEqual(string date1,string date2) {
    //TODO: Implement this function, maybe you will need split function.
    //nombre;appellido;123
    string toSplit = "nombre;appellido;123";
    List<string> tokens = split(toSplit, ';');
    //["nombre","appellido", "123"]
    
    
    return false; 
}


List<Product> searchProducts(string date, string name) {

    List<Product> products;

    //TODO: Implement this function

    return products;
}


#endif /* PRODUCT_H */