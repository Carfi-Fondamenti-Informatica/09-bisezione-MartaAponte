#include <iostream>
#include <cmath>
using namespace std;

float f(float y ){
    float x=pow(y,2)*cos(y)+1;
    return x;
}

int main() {
    float  a=0 , b=0,x,err ;
    do {
        cout <<"Inserire estremi"<< endl;
        cin >> a >> b ;
    }

    while  (f(a )*f( b)>= 0);
    do {
        x = (a + b) / 2;
        if (f(x) == 0) {
            cout << x;
            break;
        }
        else {
             if(f(a) * f(x) < 0){
                b = x;}
             else {
                 a = x;
             }
        }

            err = abs((b-a)/2);
    }
    while (err>= 1e-6);
        cout.precision(4);
        cout<<x;

        return 0;
}
