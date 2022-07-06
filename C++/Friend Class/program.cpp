#include <iostream>
using namespace std;

class Bus{
    public:
        void print();
};

void test();

class Truck{
     private:
         int x;
     
     protected:
         int y;
     
     public:
         int z;
         friend class Bus; // Bus class declared friend to class Truck
};

void Bus::print(){
    Truck t;
    t.x=10;
    t.y=20;
    cout<<t.x<<" "<<t.y<<endl;
}

/*    Access truck private not possible hence gives error of inaccessible private variables
void test(){
    Truck t;
    t.x=10;
    t.y=20;
    cout<<t.x<<" "<<t.y<<endl;
}
*/

int main(){
    Bus b;
    b.print();
    //test(); Access truck private not possible hence gives error of inaccessible private variables
}