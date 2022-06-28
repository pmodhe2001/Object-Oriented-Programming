#include <iostream>
using namespace std;

class Vehicle{
      private:
          int maxSpeed;
      protected:
          int numTyres;
      public:
          string color;
};

class Car:public Vehicle{
      public:
          int numGears;
          void print(){
            // protected data members accessible
            cout<<"NumTyres : "<<numTyres<<endl;
            cout<<"Color : "<<color<<endl;
            cout<<"Num gears : "<<numGears<<endl;
          }
};

int main(){
    Vehicle v;
    v.color="Blue";
    /* Can not be accessed private & protected
    v.maxSpeed=100;
    v.numTyres=4;
    */

   Car c;
   c.color="Black";
   //c.numTyres=4; Can not be accesed protected;
   c.numGears=5;
   c.print();
   // NumTyres will print garbage value
}