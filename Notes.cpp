#include <iostream>
using namespace std;
int main(){
char _2name = 'h' ; // h is 104 in ASCII format 
//In ASCII 
// a -> 97
//A  -> 65

float c = 5.5 , b = 10;
int a = b++ ; // increament b++ -> assing then update . ++b -> update then assign

cout<<_2name*2<<endl<< ((int)c+b)*10 << endl<<5/(float)2 << endl; // Type casting for big to small data tyype here form float c=5.5 to int c = 5
                                                 // ^ here the output is given in bigger data type which is float if float not specified both 5 and 2 wiil be int so output will be 2 instead of 2.5
cout<<a<<"\n" ;

//Ternary statements --> short way to right if else for easy conditions [Suntax: condition ? "true output":"false output"]
cout<<(_2name>100 ? "it might be h ": "its not h") ;



// //conditional
// if else ,
// if -  else if - else ,(elseif and else are optional)

// // LOOPS 
// while / for /  do-while ==> all three are eqvivalent
// for and while checks condition first then do work
//do while syntax --> (does work one time then starts checking condition)
do {
cout<<"this will be printed only ones";
}
while(3>5) ;

//               PATTERNS

int n=5 ;
for(int i=0;i<n;i++){
    for(int j= i+1;j>0;j--){ // --> this is a backword loop starting form i+1 and ending at 1 
  
    cout<<j<<' ';}}
// // OUTPUT 
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 

//    INVERTED TRIANGLE PATTERN
int p;
cin>>n;
for(int i=0;i<p;i++){

for(int j =0;j<i;j++){
cout<<" ";}

for(int k=0;k<p-i;k++){// smartmove-> as i is increasing from 0 to 3 n-i wll be decreasing from 4 to 1
cout<<i+1;}
cout<<endl;}

//OUTPUT for n=4
// 1111
//  222
//   33
//    4


// PYRAMID PATTERN

//divide the pyramid in two triangles
//     1|
//    12|1
//   123|21
//  1234|321
// 12345|4321
int k;
cin>>n;

for(int i=0;i<k;i++){//-> for no of rows

for(int j =0;j<k-(i+1);j++){//first spaces 
cout<<" ";}

for(int j=0;j<=i;j++){// then number (triangle) first one 
cout<<j+1;}

for(int j=i;j>0;j--){// repeting reverse numbers (trangle 2)
cout<<j;}

cout<<endl;
}cout<<endl;



return 0;
}
