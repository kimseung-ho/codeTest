#include <iostream>
#include <windows.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    int a =3;
    int b =1;
    while(a!=b){
        cout<<b<<endl;
        b++;
    }

    Sleep(10000);   //콘솔체크
    return 0;
}