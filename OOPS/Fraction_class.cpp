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
        void addfraction(fraction const &f1){
            int lcm = denominator * f1.denominator;
            int x = lcm/denominator;
            int y = lcm/f1.denominator;
            numerator *= x;
            numerator += f1.numerator*y;
            denominator = lcm;
            simplify();
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
    f1.multiply(f2);
    f1.print();
    f2.print();
    return 0;
}