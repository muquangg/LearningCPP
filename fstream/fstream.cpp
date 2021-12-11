#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    char data[100];

    // write to the file 
    ofstream ofile;
    ofile.open("person_msg.txt"); // open a file with the writing mode

    cout << "---Writing to the file---" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);
    ofile << "Name: " << data << endl; // write the data to out stream(file)

    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();
    ofile << "Age: " << data << endl; // write the data to out stream(file)

    ofile.close(); // do not forget to close the file

    // read from the file
    ifstream ifile;
    ifile.open("person_msg.txt");
    
    // getline一直读到换行符，从输入缓存读取换行符并把换行符丢弃
    // >>输入运算符遇到空白字符就停止输入，但把空白字符留在缓冲区
    cout << "---Reading from the file---" << endl; 
    // ifile >> data;
    // cout << data;
    // ifile >> data;
    // cout << data;
    string data_temp;
    getline(ifile, data_temp);
    strcpy(data, data_temp.c_str());
    cout << data << endl;
    getline(ifile, data_temp);
    strcpy(data, data_temp.c_str());
    cout << data << endl;

    ifile.close(); // do not forget to close the file

    return 0;
}