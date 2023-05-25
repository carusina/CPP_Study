#include <iostream>
using namespace std;

template <class T> class MyStack
{

  T data[2];

    public:
        int tos = -1;  

        void push(T element)
        {
            if (tos == 1)  {  cout << "stack full이므로 더 넣지 못합니다." << endl;  }    /* 4 말고 1 */
            else {  tos++;  data[tos] = element;  }
        }

        T pop()
        { 
            if (tos == -1) { cout << "stack empty - 프로그램을 종료합니다." << endl;  exit(0); }
            return data[tos--]; 
        }
};

int main()
{
  MyStack<string> sc;

  sc.push("bye"); sc.push("hello"); sc.push("Korea");

  cout << "현재 string 스택에 " << sc.tos + 1 << " 개 있음 " << endl;
  cout << "맨 위에 있는 " << sc.pop() << " 꺼냄" << endl;
  cout << "맨 위에 있는 " << sc.pop() << " 꺼냄" << endl;
  sc.pop();
}