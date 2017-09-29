//
//  main.cpp
//  ForAlgorithm
//
//  Created by 朱博抡 on 2017/9/29.
//  Copyright © 2017年 朱博抡. All rights reserved.
//
#include <iostream>
using namespace std;


template<class T>
T inner_product(T *a,T *b ,int n){
    T num=0;
    for (int i=0; i<n; i++) {
        num+=a[i]*b[i];
    }
    return  num;
}

int main(void){
    double a[5]={1,2,3,4,5};
    double b[5]={1,0,0,2,1};
    cout<<inner_product(a, b, 5)<<endl;
    cout<<14<<endl;
    return 0;
}

