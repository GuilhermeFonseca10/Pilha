typedef int Item_type;
const int max_items = 10;

class MyStack{
private:
    int tamanho;
    Item_type* structure;
   int topo;
public:
    MyStack();
    ~MyStack();
    bool isFull();
    bool isEmpty();
    void push(Item_type item);
    Item_type pop();
    void print();
    int size();
    int top();
    void clear();

};
