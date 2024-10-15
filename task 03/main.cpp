#include<iostream>
using namespace std;
int main(){
int number=10;
number+=5;//Step 1:Add 5 to number
number-=2;//Step 2:Subtract 2 from resulted number from step 1
number*=3;//Step 3:Multiply resulted number from step 2 by 3 
number/=4;//Step 4:Divide resulted number from step 3 by 4
number%=2;//Step 5:Modulus on resulted number from step 4
cout<<"Final value of number:"<<number<<endl; 
return 0;
}