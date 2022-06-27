#include <iostream>
using namespace std;

class ComplexNo{
      private:
          int real,imaginary;
      public:
          ComplexNo(int real,int imaginary){
             this->real=real;
             this->imaginary=imaginary;
          }

          void print(){
            cout<<this->real<<" "<<this->imaginary<<"i"<<endl;
          }

          void add(ComplexNo c2){
            this->real=this->real + c2.real;
            this->imaginary=this->imaginary + c2.imaginary;
          }

          void multiply(ComplexNo c2){
            this->real=this->real * c2.real;
            this->imaginary=this->imaginary * c2.imaginary;
          }
};

int main(){
    //ComplexNo c1,c2;
    int real1,imaginary1;
    cin>>real1>>imaginary1;
    int real2,imaginary2;
    cin>>real2>>imaginary2;
    ComplexNo c1=ComplexNo(real1,imaginary1);
    ComplexNo c2=ComplexNo(real2,imaginary2);
    c1.add(c2);
    c1.print();
    c1.multiply(c2);
    c1.print();
}