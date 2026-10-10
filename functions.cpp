#include <iostream>
using namespace std;
// void function ==> dosent return anything  
void sum(int a  ,int b){
    int s=a+b;
    cout<<s<<endl; // cout is itself inside the function so it dosent return anything it directly prints 
}
//return functions ==> takes input and returns a value to the main function right where its called 

int sum2(int a, int b){
    int ss=a-b;
return ss;   // an int(non void) function should always contain return value 
}

int digitsum(int a){
   int sum=0;
   for(int i=0;a>0;i++){
    int d=a%10;
    sum+=d;
    a=a/10;
   }
return sum;

}

int main(){
sum(10,6); //--> prints s

cout<<sum2(15,10)<<endl;//--> this func calculates ss then returns it to cout 
// or we can store the output value of function in a new variable and then use it 
int s=sum2(30,10);
cout<<s<<"\n";
// all variables are destroyed after execution of a function
int a=15,b=12;
sum(a,b);// only the value is passed to the function ie 15,12 which is stored in a varient(copy) of a,b inside the function

cout<<digitsum(459);
    return 0;
}


