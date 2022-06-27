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
};

int main(){
    int real1,imaginary1;
    cin>>real1>>imaginary1;
    int real2,imaginary2;
    cin>>real2>>imaginary2;
    ComplexNo(real1,imaginary1);
    ComplexNo(real2,imaginary2);
}