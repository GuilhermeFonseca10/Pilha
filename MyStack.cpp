 #include <iostream>
 #include "MyStack.h"

 using namespace std;

 MyStack::MyStack(){
     tamanho =0;
     structure = new Item_type[max_items];
     topo=-1;
 }
  MyStack::~MyStack(){
      delete [] structure;
  }

    bool MyStack::isFull(){
      if(tamanho==max_items){
          cout<<"The pile is full"<<endl;
        return true;
      }
else{
        cout<<"The pile is not full"<<endl;
    return false;
}
    }
    bool MyStack::isEmpty(){
        if(tamanho==0){
                cout<<"The stack is empty"<<endl;
            return true;
        }else{
              cout<<"The stack is not empty"<<endl;
        return false;
        }
    }
    void MyStack::push(Item_type item){
        if(isFull()){
            cout<<"Overflow"<<endl;
        }
        else{
        structure[tamanho]=item;
        tamanho++;

        }
    }
  Item_type MyStack::pop(){
if(isEmpty()){
    cout<<"Underflow"<<endl;
return 0;
}else{
   tamanho--;
   return structure[tamanho];

}
    }
    void MyStack:: print(){
cout<<"Stack [ ";
for (int i=0; i<tamanho; i++){
    cout <<structure[i]<< " | ";
}
cout << "]\n";
    }
    int MyStack::size(){
        cout<<"Size: "<<tamanho;
return tamanho;

    }

    void MyStack::clear(){
   tamanho=-1;
    }
int MyStack::top(){
topo=structure[tamanho-1];
cout<<"Top: "<<topo;

}
