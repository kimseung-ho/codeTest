//1859. 백만 장자 프로젝트 
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV5LrsUaDxcDFAXc&categoryId=AV5LrsUaDxcDFAXc&categoryType=CODE&problemTitle=&orderBy=SUBMIT_COUNT&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=1
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    //T개의 케이스가 입력됨
    //N개의 일수가 입력됨
    int t, n, temp, index, max_el;
    long sum = 0;
    cin>>t;
    vector<long> sum_arr;
    
    for(int cnt = 0; cnt < t ; t++){
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin>>temp;
            arr.push_back(temp);
        }
        while(index != n){// 최대값을 찾아서 그 전까지 모두 구매하고 판다 -> 다시 최대값을 찾아서 또 반복
            max_el = *max_element(arr.begin(), arr.end());
            index = max_element(arr.begin(), arr.end()) - arr.begin();
            for(int i = 0 ; i<=index; i++){
                sum += (max_el - arr.front());
                arr.erase(arr.begin());
            }
        }
        sum_arr.push_back(sum);
        sum = 0;

    }

    for(int cnt = 0; cnt <t ; t++){
        cout<<"#"<<cnt+1<<" "<<sum_arr.front()<<endl;
        sum_arr.erase(sum_arr.begin());
    }

}