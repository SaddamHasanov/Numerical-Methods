#include <iostream>
#include <iomanip>
#include <cmath>

double func(double x){
    double equation = pow(x,3) + cos(x) - 2;
    return equation;
}

double first_der(double x){
    double h = 0.00001;
    double first_derivetive = (func(x + h) - func(x)) / h;
    
    return first_derivetive;
}

double second_der(double x){
    double h = 0.00001;
    double sec_derivetive = (func(x + h) - 2 * func(x) + func(x - h)) / pow(h, 2);
    
    return sec_derivetive;
}

using namespace std;
int main(){
    
    double a;
    double b;
    double x0;
    double xn1;
    double xn2;
    double x;
    int i, n = 30;
    
    do{
        cout << "Enter the starting point of interval : ";
        cin >> a;
        cout << "Enter the end point of interval : ";
        cin >> b;
    }while(func(a) * func(b) >= 0 || a >= b);
    
    cout << endl;
    if(func(a) < 0){
        x0 = b;
        for(i = 0; i < n; i++){
            xn1 = ((a * func(b)) - (b * func(a))) / (func(b) - func(a));
            a = xn1;
            
            xn2 = x0 - (func(x0) / first_der(x0));
            x0 = xn2;
            
            x = (a + x0) / 2;
            
            cout << fixed << setprecision(19) << x << endl;
        }
    }else{
        x0 = a;
        for(i = 0; i < n; i++){
            xn1 = ((a * func(b)) - (b * func(a))) / (func(b) - func(a));
            b = xn1;
            
            xn2 = x0 - (func(x0) / first_der(x0));
            x0 = xn2;
            
            x = (b + x0) / 2;
            
            cout << fixed << setprecision(19) << x << endl;
        }
    }
    
    return 0;
}