#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int input{};
    cin >> input;

    //sum of date
    int x = input;
    int sum_date{0};
    while(x != 0){
        sum_date = sum_date + x % 10;
        x = x / 10;
    }
    cout << "sum of date : " << sum_date << "\n";

    //sum of (sum of date)
    int sum_date_final{0};
    while(sum_date != 0){
        sum_date_final = sum_date_final + sum_date % 10;
        sum_date = sum_date / 10;
    }
    cout << "sum of (sum of date) : "  << sum_date_final << "\n";

    //sum of dd
    if(sum_date_final == 11){
        cout << "Oops! can't add. 11 is super-special" << endl;
    }else{
        int y = input / 1000000;
        int dd{0};
        while (y != 0){
            dd = dd + y % 10;
            y = y / 10;
        }
        cout << "sum of DD : " << dd << "\n";
    }
    return 0;
}
