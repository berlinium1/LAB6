//
//  main.cpp
//  LAB6(algo)
//
//  Created by Берлинский Ярослав Владленович on 01.12.2020.
//

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
long double exponenta(long double, long double);
int main(){
    long double x, eps;
    long double y;
    cout<<"Введіть значення змінної x: ";
    cin>>x;
    cout<<"Введіть точність eps: ";
    cin>>eps;
    while (x<0){
        printf("\nЗмінна x має бути більше нуля. Введіть ще раз: ");
        cin>>x;
    }
    if (x<=2){
        y=exponenta(x, eps) + exponenta(2*x, eps);
             }
    else y = 1/(exponenta(x+5, eps))-exponenta(x+2, eps);

    cout<<"\nЗначення y дорівнює: "<<y<<endl;
  
}

long double exponenta(long double x, long double eps){
     long double diff;
     int n;
     long double s = 1;
     long double elem0 = 1;
     long double elem1 = (pow(-1,1)*pow(x,1))/1;
     s = elem0 + elem1;
     long int fact = 1;
     diff = 1;
     n=1;
     while ((diff>eps) || ((diff==0)&&(x!=0))){
         elem0=elem1;
         n++;
         fact = fact*n;
         elem1 = (pow(-1,n)*pow(x,n))/fact;
         diff = fabs(fabs(elem1)-fabs(elem0));
         s=s+elem1;
}
    return s;
}
















/* для перевірки алгоритму роботи програми на основі y=e^(-x) при розкладі у ряд Тейлора
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
long double exponenta(long double, long double);
int main(){
    long double x, eps;
    cout<<"Введіть значення змінної x: ";
    cin>>x;
    cout<<"Введіть точність eps: ";
    cin>>eps;
    long double diff;
    int n;
    long double s = 1;
     long double elem0 = 1;
     long double elem1 = (pow(-1,1)*pow(x,1))/1;
     long double elem2 = (pow(-1,2)*pow(x,2))/2;
     long double elem3 = (pow(-1,3)*pow(x,3))/6;
     s = elem0 + elem1 + elem2;
     long int fact = 6;
     diff = 1;
     n=3;
     while ((diff>eps) || diff == 0){
         s = s+elem3;
         cout<<n<<") Сума дорівнює "<<s<<endl;
         cout<<"факторіал(1)="<<fact<<endl;
         cout<<"під степенем(1)= "<<pow(x,n)<<endl;
         elem2=elem3;
         n=n+1;
         fact = fact*n;
         elem3 = (pow(-1,n)*pow(x,n))/fact;
         diff = fabs(fabs(elem3)-fabs(elem2));
         cout<<"різниця= "<<diff<<endl;
         cout<<"факторіал(2)= "<<fact<<endl;
         cout<<"під степенем(2)= "<<pow(x,n)<<endl;
         cout<<"елемент(1)= "<<elem2<<endl;
         cout<<"елемент(2)= "<<elem3<<endl<<endl;
  
}
}
 */
