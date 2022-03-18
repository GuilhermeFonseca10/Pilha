#include <iostream>
#include "MyStack.h"
using namespace std;

int main(){
MyStack p;
Item_type item;
int option;
cout << "---Stack----";

do{
cout<<endl;
    cout<<"Digite 1 para inserir um elemento na pilha"<<endl;
    cout<<"Type 2 to remove an element from the stack"<<endl;
    cout<<"Digite 3 para imprimir a pilha"<<endl;
    cout<<"Type 4 to see the stack size"<<endl;
    cout<<"Type 5 to make sure the battery is full"<<endl;
    cout<<"Type 6 to make sure the stack is empty"<<endl;
    cout<<"Type 7 to clear the stack"<<endl;
    cout<<"Type 8 to see top of stack"<<endl;

    cout<<"Type 0 to exit"<<endl;
    cout<<endl;
   cin >>option;
if(option == 1){
    cout<<"Type the element to be inserted into the stack: "<<endl;
    cin >>item;
    p.push(item);
}
else if(option==2){
item= p.pop();
cout<<"Removed element: "<< item<< endl;
}
else if(option==3){
p.print();
}
else if(ooption==4){
p.size();
}
else if(option==5){
p.isFull();
}
else if(option==6){
p.isEmpty();
}
else if(option==7){
    p.clear();
}
else if(option==8){
    p.top();
}
}while(option !=0);






return 0;
}
