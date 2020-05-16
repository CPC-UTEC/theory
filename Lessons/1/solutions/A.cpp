#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long sz,P;
    while((cin>>sz>>P)&&(sz>0)&&(P>0)){
           long long L= (sz+1)/2;
            switch(P){
                 case 1:cout<<"Line = "<<L<<", column = "<<L<<"."<<endl;
                     break;
                 default:
                         double yu=sqrt(P-1);
                         long long i=(int)yu;
                               if(i%2==0) i=i-1;
                         long long j=(i+1)/2;
                         long long x= P-i*i;
                         long long y=(x-1)/(i+1);
                         long long z=x-y*(i+1);
                        switch(y){
                            case 0: cout<<"Line = "<<L+j<<", column = "<<L-z+j<<"."<<endl;
                                   break;
                            case 1: cout<<"Line = "<<L+j-z<<", column = "<<L-j<<"."<<endl;
                                   break;
                            case 2: cout<<"Line = "<<L-j<<", column = "<<L-j+z<<"."<<endl;
                                   break;
                            case 3: cout<<"Line = "<<L-j+z<<", column = "<<L+j<<"."<<endl;
                                   break;
                        }
                        
                              
    
                 }
             }

    
}