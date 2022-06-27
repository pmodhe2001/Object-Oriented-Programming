#include<iostream>
using namespace std;

class Fraction{
    private:
      int numerator,denominator;
    public:
       Fraction(int numerator,int denominator){
          this->numerator=numerator;
          this->denominator=denominator;
       }


       void print(){
           cout<<(this->numerator)<<" / "<<(this->denominator)<<endl;
       }

       void simplify(){
           int gcd=1;
           int j=min(this->numerator,this->denominator);
           for(int i=1;i<=j;i++){
              if((this->numerator%i==0) && (this->denominator%i==0)){
                  gcd=i;
              }
           }
           this->numerator=numerator/gcd;
           this->denominator=denominator/gcd;
       }

       void add(Fraction f2){
          int lcm=denominator * f2.denominator;
          int x=lcm/denominator;
          int y=lcm/f2.denominator;
          int num = x*numerator + y*f2.numerator;
          numerator=num;
          denominator=lcm;
          simplify();
       }    

       void multiplication(Fraction f2){
          int num=numerator * f2.numerator;
          int den=denominator * f2.denominator;
          numerator=num;
          denominator=den;
          simplify();
       }   
       
};

int main(){
    Fraction f1(10,2);
    Fraction f2(15,4);
    Fraction f3(10,2);
    Fraction f4(36,6);
    f1.add(f2);
    f1.print();
    //f1.simplify();
    f2.print();
    f3.multiplication(f4);
    f3.print();
}