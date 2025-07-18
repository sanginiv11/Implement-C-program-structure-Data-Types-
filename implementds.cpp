#include<iostream>
#include<string>
using namespace std;

int main() {
    int a;
    cout<<"Enter any integer: ";
    cin>>a;
    cout<<"Integer = "<<a<<" and size is "<<sizeof(a)<<" bytes"<<endl;

    float b;
    cout<<"Enter any number with decimal: ";
    cin>>b;
    cout<<"Float = "<<b<<" and size is "<<sizeof(b)<<" bytes"<<endl;

    string c;
    cout<<"Enter any word: ";
    cin>>c;
    cout<<"String = "<<c<<" and size is "<<sizeof(c)<<" bytes"<<endl;

    double d;
    cout<<"Enter any number with bigger decimal: ";
    cin>>b;
    cout<<"Double = "<<d<<" and size is "<<sizeof(d)<<" bytes"<<endl;

    char e;
    cout<<"Enter any character: ";
    cin>>e;
    cout<<"Character = "<<e<<" and size is "<<sizeof(e)<<" bytes"<<endl;

    bool f;
    cout<<"Enter True/False: ";
    cin>>boolalpha;
    cin>>f;
    cout<<"Boolean = "<<f<<" and size is "<<sizeof(f)<<" bytes"<<endl;

    return 0;
}
