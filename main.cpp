#include <iostream>
#include <cmath>
using namespace std;

float f(float y){
    float x=pow(y,2)*cos(y)+1;
    return x;
}

int main() {
    float a=0, b=0, x, err;
    do{
        cout << "inserire estremi\n";
        cin >> a >> b;
    } while (f(a)*f(b)>=0);
    do{
        x=(a+b)/2;
        if (f(x)==0){
            break;
        }
        else if (f(a)*f(x)<0){
            b=x;
        }
        else {
            a=x;
        }
        err=abs((b-a)/2);
    }while (err >= (1e-6));
    x=x*10000;
    float c=int(x);
    float d=c/10000;
    cout <<d;
    return 0;
}
