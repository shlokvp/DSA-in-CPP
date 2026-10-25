#include <iostream>
using namespace std;

int main(){
    //   breaking the paytternin top and bottom
int n=4;
// top
for(int i=0;i<n;i++){

    for(int j=0;j<=i;j++){//stars
        cout<<"*";
    }

    for(int j=0;j<2*(n-i-1);j++){// spaces
        cout<<" ";
    }

    for(int j=0;j<=i;j++){// stars 
        cout<<"*";
    }
        cout<<endl;

} 
// Bottom
for(int i=0;i<n;i++){

    for(int j=0;j<n-i;j++){// stars
        cout<<"*";
    }

    for(int j=0;j<2*i;j++){// spaces
        cout<<" ";
    }

    for(int j=0;j<n-i;j++){// stars
        cout<<"*";
    }

    cout<<endl;
}
    return 0;
}