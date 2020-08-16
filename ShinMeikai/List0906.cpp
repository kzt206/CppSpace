#include<iostream>

using namespace std;

double power(double x,int n);

int main(){
    double a;
    int b;
    cout << "Calculate a power of b \n";
    cout << "double  a:"; cin >> a;
    cout << "integer b:"; cin >> b;
    cout << power(a,b) << endl;
}