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
  char storeUrl[100];
  char productName[50];
  char datePromotionPeriod[11]; //Format dd/mm/yyyy
  double price;
};

Product toProduct(ProductBinary productBinary) {
    Product product;
    product.storeName = productBinary.storeName;
    product.storeURL = productBinary.storeUrl;
    product.productName = productBinary.productName;
    product.datePromotionPeriod = productBinary.datePromotionPeriod;
    product.price = productBinary.price;
    return product;
}

ProductBinary toProductBinary(Product product) {
    ProductBinary productBinary;
    strcpy(productBinary.storeName, product.storeName.c_str());
    strcpy(productBinary.storeUrl, product.storeURL.c_str());
    strcpy(productBinary.productName, product.productName.c_str());
    strcpy(productBinary.datePromotionPeriod, product.datePromotionPeriod.c_str());
    productBinary.price = product.price;
    return productBinary;
}
List<ProductBinary> toProductBinaryList(List<Product> products) {
    List<ProductBinary> productBinaries;
    for (int i = 0; i < products.size; i++) {
        productBinaries.add(toProductBinary(products.get(i)));
    }
    return productBinaries;
}

List<Product> toProductList(List<string> lines) {
  //1. Definir una lista de productos vacía
  List<Product> products;

  //2. Recorrer las líneas de mi archivo
  for (int i = 0; i < lines.size; i++) {
    //2.1 Separar los campos de la línea por el delimitador ;
    List<string> tokens = split(lines.get(i), ';');

    //2.2 Crear un producto con los campos separados
    Product product;
    product.storeName = tokens.get(0);
    product.storeURL = tokens.get(1);
    product.productName = tokens.get(2);
    product.datePromotionPeriod = tokens.get(3);
    product.price = stod(tokens.get(4));

    //2.3 Agregar el producto a la lista de productos
    products.add(product);
  }

  //3. Retornar la lista de productos
  return products;

}

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