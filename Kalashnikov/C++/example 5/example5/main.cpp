/*
#include <iostream>

using namespace std;

double myfunc(double length, double width, double heght);
void f();
void f2();
void f3(int *j);
void power (int base, int exp);
void display(int num [10]);

int main(){

    double ans;

    cout << "before\n";
    //ans = myfunc(10.1,11.2,3.3);
    ans = myfunc(1,2,3)+myfunc(2.2,3,3);
    ans = ans/2;
    f();
    f2();
    power (10,2);
    power (10, -2);

    cout << "after\n";
    cout << ans << " it's ans\n\n";

    for (int i = 0; i < 3; i++)
        f2();

    int i;
    int *p;

    p = &i;

    f3(p);

    cout << i << "\n\n";

    int t[10];

    for (i = 0; i < 10; ++i)
        t[i] = i;

    display(t);

    return 0;
}

void display(int dex[10]){
    for (int i = 0; i < 10; i++)
        cout << dex[i] << " ";
}

void f3(int *j){
    *j = 100;
}

void f2(){
    int m = 99;

    cout << m << "\n";
    m++;
}

void power (int base, int exp){

    int i;

    if (exp < 0)
        return;

    i = 1;

    for ( ; exp; exp--)
        i = base * i;
    cout << "ans: " << i << "\n";
}

double myfunc(double length, double width, double heght){
    return length * width * heght;
}

void f(){
    cout << "f\n";
    return;
    cout << "L&M";
}
*/

//return-type   name function  (paramer)
#include <iostream>

#include "hypot.h"
#include "mystrlen.h"

using namespace std;

int main (){
    double
        a,
        b,
        result;

    cout << "Eneter a: ";
    a = 3;
    cout << a;

    cout << "\nEnter b: ";
    b = 4;
    cout << b;

    result = hypot(a,b);

    cout << "\nHyp: " << result;
    cout << "\n\n";

    char str[80] = {"Loafsdlfa;sjldks\n"};

    cout << mystrlen(str);


    return 0;

}
