#include <iostream>
#include <string.h>

using namespace std;

class String{
public:
    String(const char *str=0)
    {
        if (str){
            m_data = new char[strlen(str) + 1];
            strcpy(m_data, str);
        }
        else{
            m_data = new char[1];
            *m_data = '\0';
        }
    }
    String(const String &x);
    String& operator = (const String &x);

    ~String()
    {
        delete [] m_data;
    }

    char *get_c_str() const 
    { 
        return m_data; 
    }

private:
    char *m_data;

};

inline 
String::String(const String &x)
{
    m_data = new char[strlen(x.m_data) + 1];
    strcpy(m_data, x.m_data); 
}

inline
ostream& operator << (ostream &os, const String &x)
{
    os << x.get_c_str();

    return os;
}

inline 
String& String::operator=(const String &x)
{
    if (this == &x)
        return *this;
    
    delete [] m_data;
    m_data = new char[strlen(x.m_data) + 1];
    strcpy(m_data, x.m_data);

    return *this;
}

int main()
{
    String s1("Hello");
    String s2("World");
    cout << s1 << s2 << endl;

    s2 = s1;
    cout << s1 << s2 << endl;

    String s3("World");
    s2 = s3;
    cout << s1 << s2 << endl;

 
    return 0;
}