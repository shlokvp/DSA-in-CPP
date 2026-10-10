#include <iostream>
using namespace std ;

int main (){

cout<<"                     CALCLUATOR\n Operation codes\n a for addition \n s for subbstraction\n m fpr multiplication \n d for division\n"<<endl<<"\n" ;
cout<<"Enter Num 1 : " ;
float Num1,Num2 ;
cin>>Num1;
cout<<"Enter Num 2 : " ;
cin>>Num2;
float a=Num1+Num2 , s = Num1-Num2 , m = Num1*Num2 , d = Num1/Num2 ;
char c ;
cout<<"Input operation code : " ;
cin >> c;
if (c=='a') {
cout<<"---------------\nYour answer is : " << a; 
 }
 else if (c=='s'){
cout<<"---------------\nYour answer is : " << s; 
}
else if (c=='m'){
cout<<"---------------\nYour answer is : " << m; 
 }
else if (c=='d'){
cout<<"---------------\nYour answer is : " << d; 
 }
else 
cout<<"---------------\nINVALID OPERATION COde ";
cout<<"hello trial";
    return 0 ;
}