/*
*模版函数用于计算数组的长度 使用c的方式传递*num 是不可行的。原因是数组名并不完全*等价于指针。所以在传递过去的时候复制构造函数会将数组名退化成一个指针，这个时候再使用sizeof计算的结果就是指针占用的空间大小而非数组本身。为了防止数组名退化，需*要使用引用传递，而非值传递。
*/

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

