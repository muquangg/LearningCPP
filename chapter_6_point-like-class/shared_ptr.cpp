#include <iostream>

struct Foo
{
    void describe() { std::cout << "I am an instance of Foo." << std::endl; }
};

template<class T>
class shared_ptr
{
public:
    T & operator * () const  { return *px; }
    T * operator -> () const { return px;  }

    shared_ptr(T* p) : px(p) { };
    ~shared_ptr() { };
private:
    T* px;
};

int main()
{
    shared_ptr <Foo> sp(new Foo);
    Foo f(*sp);         // *sp 是一个 Foo 实例的引用，这里调用 Foo 的拷贝构造函数 
    f.describe();       // 直接调用 describe 函数
    sp->describe();     // 注意这里 -> 操作符连续调用，直至成功调用 describe 函数 实际上的动作 (sp->)->describe() 等价于 px->describe()

    return 0;
}