#include <iostream>


using namespace std;

int main() {
   int hora, min , s;
   cout<<"introduce las horas: ";
   cin>>hora;
   cout<<"introduce los minutos: ";
   cin>>min;
   cout<<"introduce los segundos: ";
   cin>>s;

   if(s < 60 && min < 60 && hora < 24) {
       s++;
       if(s == 60){
           s = 00;
           min++;
           if(min == 60) {
               min = 00;
               hora ++;           
               if(hora == 24);{
                   hora = 0;
               }
               
           }
       }
   }
   cout<<endl<<"La hora un segundo despues es: "<<hora<<":"<<min<<":"<<s;
  

   return 0;
}
