//
//  main.cpp
//  pro1
//
//  Created by el1ven on 14-6-6.
//  Copyright (c) 2014年 el1ven. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <stack>

using namespace std;

//利用栈进行括号匹配的程序

bool isMatched(const char exp[], int len){//传入表达式和char数组的长度
    stack<char> s;
    for(int i = 0; i < len; i++){
        if('(' == exp[i]){
            s.push(exp[i]);//左括号进栈
        }else if(!s.empty() && ')' == exp[i]){
            s.pop();//右括号出栈
        }
    }
    return s.empty();//最终如果栈为空则匹配成功，要么就是匹配失败
}
int main(){
    
    char exp[100] = {};//初始化
    while(cin>>exp){
        int len = (int)strlen(exp);
        if(isMatched(exp, len)){
            cout<<"Success!"<<endl;
        }else{
            cout<<"Fail!"<<endl;
        }
    }
    
    return 0;
}
























