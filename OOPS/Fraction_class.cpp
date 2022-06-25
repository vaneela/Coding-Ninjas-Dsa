#include<bits/stdc++.h>
#define ll long long
using namespace std;

class fraction{
    int numerator;
    int denominator;
    
    public:
        // constructor
        fraction(int numerator,int denominator){
            this -> numerator = numerator;
            this -> denominator = denominator;
        }

        void print(){
            cout << numerator << " / " << denominator << endl;
        }

        void simplify(){
            int gcd = __gcd(numerator,denominator);
            numerator /= gcd;
            denominator /=gcd;
        }
        void add(fraction const &f1){
            int lcm = denominator * f1.denominator;
            int x = lcm/denominator;
            int y = lcm/f1.denominator;
            numerator *= x;
            numerator += f1.numerator*y;
            denominator = lcm;
            simplify();
        }
        fraction operator+(fraction const &f1){
            int lcm = denominator * f1.denominator;
            int x = lcm/denominator;
            int y = lcm/f1.denominator;
            int num = numerator*x +f1.numerator*y;
            numerator =0;
            fraction f4(num,lcm);
            f4.simplify();
            return f4;
        }
        void multiply(fraction const &f1){
            numerator *= f1.numerator;
            denominator *= f1.denominator;
            simplify();
        }
};
int main(){
    fraction f1(5,16),f2(3,8);
    f1.print();
    f2.print();
    
    fraction f4=f1+f2;
    f4.print();
    // f1.add(f2);
    f1.print();
    f2.print();
    return 0;
}