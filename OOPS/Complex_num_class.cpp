#include <iostream>
using namespace std;
class ComplexNumbers {
    // Complete this class
    int real,img;
    public:
    	ComplexNumbers(int r,int i){
            real=r;
            img =i;
        }
    void plus(ComplexNumbers const &c){
		this->real+=c.real;
        this->img +=c.img;
    }
    void multiply(ComplexNumbers const &c){
        int a= (this->real)*c.real - (this->img)*c.img;
        int b= (this->real)*c.img+ (this->img)*c.real;
        this->real=a;
        this->img=b;
    }
    void print(){
        cout << real << " + "<< "i"<< img << endl;
    }
};

int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }   
}