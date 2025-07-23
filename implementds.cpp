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
/* OUTPUT
Enter any integer: 11
Integer = 11 and size is 4 bytes
Enter any number with decimal: 
23.4
Float = 23.4 and size is 4 bytes
Enter any word: sangini
String = sangini and size is 32 bytes
Enter any number with bigger decimal: 24.9877665
Double = 7.87263e-85 and size is 8 bytes
Enter any character: V
Character = V and size is 1 bytes
Enter True/False: false'
Boolean = 0 and size is 1 bytes */
