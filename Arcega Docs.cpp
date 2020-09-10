#include<iostream>
using namespace std;
int main()
{
    float x,y,num;
    int a=1,b=2,c=3,d=4;
   
    
    cout<<"Choose an operation:\n";
    cout<<"-------------------------\n 1.Additiom 2.Subtraction\n 3.Multiplication 4.Division\n\n";
  cin>>num;
    if(num==1){
        cout<<"Addition:\n";
    }
    else if(num==2){
        cout<<"Subtraction:\n";
    }
    else if(num==3){
        cout<<"Multiplication:\n";
    }
    else if(num==4){
        cout<<"Division:\n";   
    } else {
    for(int a=1;a<=6;a++) // Change 'a<=?' to how many * you want
					cout <<"...";
					}
    
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;
    if (num==a){
        (num=x+y);
        cout<<"The sum is: "<<num;
    }
    else if(num==b){
        (num=x-y);
        cout<<"The difference is: "<<num;
    }
    else if(num==c){
        (num=x*y);
        cout<<"The product is: "<<num;
    }
    else if(num==d){
        (num=x/y);
         if(x<y){
           cout<<"Sorry dividend must be greater than the divisor";
        }
         else {
        cout<<"The quotient is "<<num;
    }
        
    }
      return 0;
   
    
}