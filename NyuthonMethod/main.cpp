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
    
    double x0;
    double xn;
    int i, n = 30;
    
    do{
        cout << "Enter starting point : ";
        cin >> x0;
    }while(func(x0) * second_der(x0) <= 0);
    
    cout << endl;
    for(i = 0; i < n; i++){
        xn = x0 - (func(x0) / first_der(x0));
        x0 = xn;
        cout << fixed << setprecision(19) << x0 << endl;
    }
    
    return 0;
}