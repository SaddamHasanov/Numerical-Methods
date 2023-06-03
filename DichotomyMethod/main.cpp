#include <iostream>
#include <iomanip>
#include <cmath>

double func(double x){
    double equation = pow(x,3) + cos(x) - 2;
    return equation;
}

using namespace std;
int main(){
    
    double a;
    double b;
    double c;
    int i, n = 30;
    
    do{
        cout << "Enter the starting point of interval : ";
        cin >> a;
        cout << "Enter the end point of interval : ";
        cin >> b;
    }while(func(a) * func(b) >= 0 || a >= b);
    
    cout << " [ " << fixed << setprecision(19) << a << " : " 
    << fixed << setprecision(19) << b << " ]" << endl;
    for(i = 1; i < n; i++){
        c = (a + b) / 2;
        if(func(a) * func(c) < 0){
            b = c;
        }else if(func(c) * func(b) < 0){
            a = c;
        }
        cout << " [ " << fixed << setprecision(19) << a << " : " 
        << fixed << setprecision(19) << b << " ]" << endl;
    }
    
    return 0;
}