#include <iostream>
#include <iomanip>
#include <cmath>

double func(double x){
    double equation = pow(x,3) + cos(x) - 2;
    return equation;
}

double newFunc(double x){
    double newEquation = cbrt(2 - cos(x));
    return newEquation;
}

double first_der(double x){
    double h = 0.00001;
    double first_derivetive = (newFunc(x + h) - newFunc(x)) / h;
    
    return first_derivetive;
}

using namespace std;
int main(){
    
    double a;
    double b;
    double x0;
    double xn;
    int i, n = 30;
    
    do{
        cout << "Enter the starting point of interval : ";
        cin >> a;
        cout << "Enter the end point of interval : ";
        cin >> b;
    }while(func(a) * func(b) >= 0 || a >= b);
    
    if(abs(first_der(a)) < 1 && abs(first_der(b)) < 1){
        x0 = a;
        for(i = 0; i < n; i++){
            xn = cbrt(2 - cos(x0));
            x0 = xn;
            cout << fixed << setprecision(19) << x0 << endl;
        }
    }
    
    return 0;
}