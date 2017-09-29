//
//  main.cpp
//  ForAlgorithm
//
//  Created by 朱博抡 on 2017/9/29.
//  Copyright © 2017年 朱博抡. All rights reserved.
//
#include <iostream>
using namespace std;


template <class T>
void iota(T* a, int n, const T& value)
{// Set a[i] = a[i] + value, 0 <= i < n.
    for (int i = 0; i < n; i++)
        a[i] += value;
}

template <class T>
void iota_error(T  &a, const T& value)
{// Set a[i] = a[i] + value, 0 <= i < n.
    int num=sizeof(a)/sizeof(a[0]); //为了少使用一个数组大小参数n，想到使用&a引用传递
                                    //然而马上就出了问题 将&改回*则不会出现问题
    for (int i = 0; i < num; i++)
        a[i] += value;
}

template <class T,unsigned m>//数组的传递会使得其没有办法知道数组大小，必须有一个额外参数使之满足 这里使用c++primer里面使用的方法 m为非类型参数
void iota_error_corrected(T  (&a)[m], const T& value){
    for (int i = 0; i < m; i++)
        a[i] += value;
}
int main(void){
    double a[5]={1,2,3,4,5};
    for (int i=0; i<5; i++) {
        cout<<a[i]<<endl;
    }
    //iota(a,5,5.0);    //正确
    
    //iota_error(a,5.0);  //编译器会报错：no matching function for call to 'iota_error'
    
    iota_error_corrected(a, 5.0);//同样正确 传递应用 且由编译器自动计算其数组大小
    for (int i=0; i<5; i++) {
        cout<<a[i]<<endl;
    }

    return 0;
}

