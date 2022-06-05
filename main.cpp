/* 1. Create a simple calculator wherein the user chooses four basic math operations: 
multiply, add, subtract and divide. After choosing an operation, the
user will enter two integers as operands of the chosen function. The
program will then display the result and asks the user if he/she wants
to do the process again. the program will terminate if the user answers
negatively. (Use Functions)*/

#include<iostream>
using namespace std;

void displayMenu();

float multiply(float num1, float num2) {

float result = num1*num2;


return result;
}

float add(float num1, float num2) {

float result = num1+num2;


return result;
}

float subtract(float num1, float num2) {

float result = num1-num2;


return result;
}

float divide(float num1, float num2) {

float result = num1/num2;


return result;
}



void displayMultiply() {

float a,b;
char choice;

cout<<"**multiply**"<<endl;
cout<<"pick 2 numbers you want to multiply "<<endl;

cout<<"first number: ";cin>>a;
cout<<"second number: ";cin>>b;

cout<<"result: "<< multiply(a,b)<<endl;
cout<<"return to menu(y) or multiply again?(n): ";cin>>choice;
cout<< endl;
switch(choice){
case 'y': displayMenu();
break;
case 'n': displayMultiply();
break;

}
}

void displayAdd() {

float a,b;
char choice;

cout<<"**Add**"<<endl;
cout<<"pick 2 numbers you want to add "<<endl;

cout<<"first number: ";cin>>a;
cout<<"second number: ";cin>>b;

cout<<"result: "<< add(a,b)<<endl;
cout<<"return to menu(y) or add again?(n): ";cin>>choice;
cout<< endl;
switch(choice){
case 'y': displayMenu();
break;
case 'n': displayAdd();
break;

}
}

void displaySubtract() {

float a,b;
char choice;

cout<<"**Subtract**"<<endl;
cout<<"pick 2 numbers you want to subtract "<<endl;

cout<<"first number: ";cin>>a;
cout<<"second number: ";cin>>b;

cout<<"result: "<< subtract(a,b)<<endl;
cout<<"return to menu(y) or subtract again?(n): ";cin>>choice;
cout<< endl;
switch(choice){
case 'y': displayMenu();
break;
case 'n': displaySubtract();
break;

}
}

void displayDivide() {

float a,b;
char choice;

cout<<"**Subtract**"<<endl;
cout<<"pick 2 numbers you want to divide "<<endl;

cout<<"first number: ";cin>>a;
cout<<"second number: ";cin>>b;

cout<<"result: "<< divide(a,b)<<endl;
cout<<"return to menu(y) or divide again?(n): ";cin>>choice;
cout<< endl;
switch(choice){
case 'y': displayMenu();
break;
case 'n': displayDivide();
break;

}
}
void displayMenu() {

char choice;
cout<<"pick "<<endl;
cout<<"(1)multiply"<<endl;
cout<<"(2)add"<<endl;
cout<<"(3)subtract"<<endl;
cout<<"(4)divide"<<endl;
cout<<"choice: ";cin>>choice;
switch(choice){
case '1': displayMultiply();
break;
case '2': displayAdd();
break;
case '3': displaySubtract();
break;
case '4': displayDivide();
break;
default: displayMenu();
break;
}
}
int main() {

displayMenu();

return 0;
}
