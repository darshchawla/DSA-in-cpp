#include <iostream>
using namespace std;

class TwoStacks{
public:
    int *arr;
    int top1;
    int top2;
    int size;

    TwoStacks(int size){
        this->size=size;
        arr=new int[size];
        top1=-1;
        top2=size;
    }

    void push1(int element){
        if(top2-top1>1){
            top1++;
            arr[top1]=element;
        }
        else{
            cout<<"Stack overflow."<<endl;
        }
    }

    void push2(int element){
        if(top2-top1>1){
            top2--;
            arr[top2]=element;
        }
        else{
            cout<<"Stack overflow."<<endl;
        }
    }

    int pop1(){
        if (top1 >= 0)
        {
            int answer = arr[top1];
            top1--;
            return answer;
        }
        else
        {
            return -1;
        }
    }

    int pop2(){
        if (top2 < size)
        {
            int answer = arr[top2];
            top2++;
            return answer;
        }
        else
        {
            return -1;
        }
    }
};

int main (){
    TwoStacks s(10);

    // Push into Stack 1
    s.push1(10);
    s.push1(20);
    s.push1(30);

    // Push into Stack 2
    s.push2(100);
    s.push2(200);
    s.push2(300);

    cout << endl;

    s.pop1();
    s.pop1();

    s.pop2();
    s.pop2();

    return 0;
}