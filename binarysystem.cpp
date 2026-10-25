// decimal --> dec = 10 nos from 0 - 9
// binary --> bi = 2   1 and 0 

// #decimal to binary
// divide decimal by 2 get quotient note remainder (lets call it a )
// now divide the obtained quotient again by 2 and note the remainder(as b)
// continue this process till we get 0 as quotient 
// at this point we wil have remainders as a b c d e .....
// write the remainders from last to first as   "edcbe" --> this is our binary number   

// EXAMPLE ( convert 7 to binary)                                EXAMPLE(6 to binary)
// 7%2=1,7/2=3(its 3.5 but only int)                              6%2=0,6/2=3
// 3%2=1,3/2=1                                                    3%2=1,3/2=1  
// 1%2=1,1/2=0(as qyotient is zero we stop)                       1%2=1,1/2=0
// now write remainders from bottom to top that is                Binary = 110 ( from bottom to up)
// 111 --> binary 7

// #binary to decimaal
// multiply digits of binary number from right to left with increasing power of 2 starting from 2^0 and add tem
// EXAMPLE:  1101  --> 1*(2^3) + 1*(2^2) + 0*(2^1) + 1*(2^0) = 8 + 4 + 0 + 1 = 13 

// #TRICK (SUMMARY) _ _ _ _ _ --> each blank contibutes powers of 2 like(64,32..) and 1 or 0 decides if it should be added to the sum to get out desired decimal number
//                 16 8 4 2 1     (odd no always have last digit as 1 and even ones have 0 asa all other powers of 2 contibute to make a eve NO. only 2^0 make it even)


// #Binary for -ve numbers 
// EXAMPLE -9
// for +ve 9 its  1001
// add MSB(most significant bit) prefix 01001(the zero before 1001)
// find 1s compliment (invert values 1->0,0->1) 10110
// find 2s complement (add 1 in ones compliment) 10111(1+0=1,1+1=10 1 of 10 is carry overed )
// [example of 1+1=10 --> 111(7) + 1(1) is 1000(8)]
// -9 is 10111 in binary 

#include <iostream>
using namespace std;

int dectobi (int n){
    int r, ans=0,p=1;
while(n>0){
    r=n%2;
    n/=2;
    ans+=r*p;
    p*=10;
}
return ans;
}

int bitodec(int n){
    int r,ans=0,p=1;
    while(n>0){
    r=n%10;
    n/=10;
    ans+=r*p;
    p*=2;}
return ans;
}

int main (){
for(int i=0;i<11;i++){
cout<<dectobi(i)<<endl;}
cout<<bitodec(10011);
    return 0;
}
