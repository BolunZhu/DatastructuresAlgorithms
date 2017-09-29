#include <iostream>
using namespace std;


template<class T>
int count(const T & num)
{
    return sizeof(num)/sizeof(num[0]);
}
template <class T>
int count_error(const T * num){
    return sizeof(num)/sizeof(num[0]);
}

int main(void){
    int a[100];
    cout<<"function count value is"<<count(a)<<endl;
    cout<<"function count_error value is"<<count_error(a)<<endl;
    cout<<sizeof(a)/sizeof(a[0])<<endl;
    return 0;
}

