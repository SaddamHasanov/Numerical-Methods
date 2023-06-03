#include <iostream>
#include <iomanip>
#include <cmath>

double func(double x){
    double equation = pow(x,3) + cos(x) - 2;
    return equation;
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
    double xn;
    int i, n = 30;
    
    do{
        cout << "Enter the starting point of interval : ";
        cin >> a;
        cout << "Enter the end point of interval : ";
        cin >> b;
    }while(func(a) * func(b) >= 0 || a >= b);
    
    cout << endl;
    if(func(a) < 0){
        for(i = 0; i < n; i++){
            xn = ((a * func(b)) - (b * func(a))) / (func(b) - func(a));
            a = xn;
            cout << fixed << setprecision(19) << a << endl;
        }
    }else{
        for(i = 0; i < n; i++){
            xn = ((a * func(b)) - (b * func(a))) / (func(b) - func(a));
            b = xn;
            cout << fixed << setprecision(19) << b << endl;
        }
    }
    
    return 0;
}