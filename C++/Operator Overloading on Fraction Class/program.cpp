#include<iostream>
#include<climits>
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

       Fraction add(Fraction f2){
          Fraction fNew(INT_MIN,INT_MIN);
          int lcm=denominator * f2.denominator;
          int x=lcm/denominator;
          int y=lcm/f2.denominator;
          int num = x*numerator + y*f2.numerator;
          fNew.numerator=num;
          fNew.denominator=lcm;
          fNew.simplify();
          return fNew;
       } 

       Fraction operator+(Fraction const &f2){
          Fraction fNew(INT_MIN,INT_MIN);
          int lcm=denominator * f2.denominator;
          int x=lcm/denominator;
          int y=lcm/f2.denominator;
          int num = x*numerator + y*f2.numerator;
          fNew.numerator=num;
          fNew.denominator=lcm;
          fNew.simplify();
          return fNew;
       }    

       Fraction multiplication(Fraction f2){
          Fraction fNew(INT_MIN,INT_MIN);
          int num=numerator * f2.numerator;
          int den=denominator * f2.denominator;
          fNew.numerator=num;
          fNew.denominator=den;
          fNew.simplify();
          return fNew;
       } 

       Fraction operator*(Fraction f2){
          Fraction fNew(INT_MIN,INT_MIN);
          int num=numerator * f2.numerator;
          int den=denominator * f2.denominator;
          fNew.numerator=num;
          fNew.denominator=den;
          fNew.simplify();
          return fNew;
       }    
};

int main(){
    Fraction f1(10,2);
    Fraction f2(15,4);
    Fraction f3(10,2);
    Fraction f4(36,6);
    Fraction f5=f1.add(f2);
    Fraction f6=f1+f2;
    Fraction f7=f3.multiplication(f4);
    Fraction f8=f3*f4;
    f5.print();
    f6.print();
    f3.multiplication(f4);
    f7.print();
    f8.print();
}