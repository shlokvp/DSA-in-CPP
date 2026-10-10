#include <iostream>
using namespace std;
int main(){
int n=4;
// HOLOW DIAMOND (split in two parts top and bottom)
// top part from i = 0 to i = 3
for(int i=0;i<n;i++){

for(int j=0;j<n-i-1;j++){// first spaces triangle
cout<<" ";}

cout<<'*';

for(int j=1;j<=(2*i)-1;j++){// 2nd spaces odd ones 
cout<<" ";}

if(i>0){cout<<"*";}
cout<<endl; 
}
//bottom three rows
for(int i=0;i<n-1;i++){

    for(int j =0;j<=i;j++){
        cout<<" ";
    }cout<<"*";

    if(i<n-2){//2nd star not in last line
    for(int j =0;j<2*(n-2-i)-1;j++){// 2(n-2-i)-1 gives odd numbers first 3 spaces for i=0 then 1 space 
    cout<<" ";}                     // we need it to be in combination of n and i as they are main variables
    cout<<"*";}

    cout<<endl;
}



    return 0 ;
}



   


