#include <iostream>

using namespace std;

const int LongCad = 20;

struct costoPorArticulo{
  char nombreArticul[LongCad + 1];        // Declarando estructura del arreglo.
  int cantidad;
  float precio;
  float costoPorArticulo;
};

void LeerDatosProduct(int n,costoPorArticulo *);
void CostoTotalProduc(int n,costoPorArticulo *);
void MostrarInfo(int n,costoPorArticulo *);
void CostoTotalCompra(int n, costoPorArticulo *);

int main() {
  int CantArticu;
  cout<<"Ingrese la cantidad de articulos: ";
  cin>>CantArticu;

  costoPorArticulo *infoproduc = new costoPorArticulo[CantArticu];  // Reservando un espacio de memoria.
  
  LeerDatosProduct(CantArticu,infoproduc);
  CostoTotalProduc(CantArticu,infoproduc);
  MostrarInfo(CantArticu,infoproduc);
  CostoTotalCompra(CantArticu,infoproduc);
  return 0;
}

void LeerDatosProduct(int n,costoPorArticulo *info){         // Utlizando -> para acceder al espacio reservado. 
  int i;
  for(i=0;i<n;i++){
    cout<<endl<<"Ingrese el nombre de articulo: ";
    cin>>(info + i)->nombreArticul;                     
    cout<<"Ingrese cantidad comprada: ";
    cin>>(info + i)->cantidad;
    cout<<"Ingrese el precio unitario: ";
    cin>>(info + i)->precio;
  }
}

void CostoTotalProduc(int n,costoPorArticulo *info){
  int i;
  for(i=0;i<n;i++){
    (info + i)->costoPorArticulo = (info + i)->cantidad * (info + i)->precio;       //formula para calcular el cosoto total del producto
  }
}

void MostrarInfo(int n,costoPorArticulo *info){
  int i;
  for(i=0;i<n;i++){
    cout<<endl<<"Nombre del articulo: "<<(info + i)->nombreArticul<<endl;
    cout<<"Cantidad de producto comprado: "<<(info + i)->cantidad<<endl;
    cout<<"Precio unitario del articulo: "<<"$"<<(info + i)->precio<<endl;
    cout<<"Costo total de producto: "<<"$"<<(info + i)->costoPorArticulo<<endl;
  }
}

void CostoTotalCompra(int n,costoPorArticulo *info){          //Utilizando un for para generar un ciclo para realizar la suma de los costos por articulo.
  int i;
  float Total = 0;
  for(i=0;i<n;i++){
      Total = (info + i)->costoPorArticulo +  Total;         //Utilizando a Total para alamcenar para poder sumar los datos. 
  }
  cout<<endl<<"El total de la compra es: "<<"$"<<Total;
}