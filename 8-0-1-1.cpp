#include<iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r, float i) : real(r), imag(i) {}

    void show() {

        if (real != 0)printf("%.2f", real);
        if (imag > 0 && real != 0)cout << "+";
        if (imag != 0)printf("%.2fi\n", imag);
	if (imag == 0 && real == 0)printf("0");


    }

    void add(const Complex& other) {
        real += other.real;
        imag += other.imag;
    }
};

int main() {
	float a,b;
	cin>>a>>b;
	Complex c1(a, b);
	c1.show();
	cout<<endl;
	cin>>a>>b;
	Complex c2(a, b);
	c2.show();
	cout<<endl;
	c1.add(c2);
	c1.show();
	return 0;
}

