#include<iostream>
#include<climits>
using namespace std;

class Stacks{
    private:
    int capacity;
    int* arr;
    int top;

    public:
    Stacks(int c){
      this->capacity = c;
      arr = new int[c];
      this->top = -1;
    }

    void push(int data){
        if(this->top == this->capacity-1){
            cout<<"Overflow";
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }

    int pop(){
      if(this->top == -1){
        cout<<"Underflow";
        return INT_MIN;
      }
      this->top--;
    }

    int gettop(){
        if(this->top == -1){
            cout<<"Underflow\n";
            return INT_MIN;
        }
        return this->arr[this->top];
    }

    bool isEmpty(){
        return this->top == -1;
    }

    int size(){
        return this->top +1;
    }

    bool isFull(){
      return this->top == this->capacity - 1;  
    }
};

int main(){
    Stacks st(5);
    st.push(1);
     st.push(2);
      st.push(3);
       st.push(4);
        st.push(8);

    cout<<st.gettop()<<"\n";
   // st.push(9);

    st.pop();
    st.pop();
    cout<<st.gettop()<<"\n";
}