//1859. 백만 장자 프로젝트 
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV5LrsUaDxcDFAXc&categoryId=AV5LrsUaDxcDFAXc&categoryType=CODE&problemTitle=&orderBy=SUBMIT_COUNT&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=1
#include<iostream>
#include<algorithm>
#include<vector>

#include<windows.h>

using namespace std;

int main(void){
    //T개의 케이스가 입력됨
    //N개의 일수가 입력됨
    int t, n, index, max_el, temp, index_cnt;
    long sum = 0;
    cin>>t;
    vector<long> sum_arr;
    vector<int> arr;

    for(int cnt = 0; cnt < t ; cnt++){
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>temp;
            arr.push_back(temp);
        }
        index_cnt = 0;
        while(index_cnt != n){
            max_el = *max_element(arr.begin(), arr.end());  //시간복잡도 O(n)
            index = max_element(arr.begin(), arr.end()) - arr.begin();
            for(int i = 0 ; i<=index; i++){
                sum += (max_el - arr.front());
                arr.erase(arr.begin());
                index_cnt++;
            }
        }
        sum_arr.push_back(sum);
        sum = 0;
    }

    for(int cnt = 0; cnt <t ; cnt++){
        cout<<"#"<<cnt+1<<" "<<sum_arr.front()<<endl;
        sum_arr.erase(sum_arr.begin());
    }

    Sleep(10000);   //콘솔체크
    return 0;
}