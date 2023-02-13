#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    //cin.tie(0);
    cout << "Enter date DDMMYYYY : ";
    int n{};
    cin >> n;

    //split input date  -> split -> store in array
    vector<int> temp{};
    int c{},tl{},l{},tth{},th{},h{},t{},u{};

    u=  (n%10);
    t=  (n/10)%10;
    h=  (n/100)%10;
    th= (n/1000)%10;
    tth=(n/10000)%10;
    l=  (n/100000)%10;
    tl= (n/1000000)%10;
    c=  (n/10000000);

    temp.push_back(c);
    temp.push_back(tl);
    temp.push_back(l);
    temp.push_back(tth);
    temp.push_back(th);
    temp.push_back(h);
    temp.push_back(t);
    temp.push_back(u);

    cout << endl;
    //cout << "Output of Temp begin and end: ";
    //for (auto i = temp.begin(); i != temp.end(); ++i)
    //    cout << *i << " ";


    //creating grid using vector + giving its own name
    int num{};
    vector<int> g4, g9, g2;
    vector<int> g3, g5, g7;
    vector<int> g8, g1, g6;

    for (auto i = temp.begin(); i != temp.end(); ++i){
        num = *i;
        //cout << num << endl;
            switch(num){
            case 4:
                g4.push_back(num);
                break;
            case 9:
                g9.push_back(num);
                break;
            case 2:
                g2.push_back(num);
                break;
            case 3:
                g3.push_back(num);
                break;
            case 5:
                g5.push_back(num);
                break;
            case 7:
                g7.push_back(num);
                break;
            case 8:
                g8.push_back(num);
                break;
            case 1:
                g1.push_back(num);
                break;
            case 6:
                g6.push_back(num);
                break;
            case 11:
                g1.push_back(num);
                break;

            default:
                continue;
        }
    }




    //Adding input date
    int input = n;

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

    //inserting sum of (sum of date) inside grid
     switch(sum_date_final){
            case 4:
                g4.push_back(sum_date_final);
                break;
            case 9:
                g9.push_back(sum_date_final);
                break;
            case 2:
                g2.push_back(sum_date_final);
                break;
            case 3:
                g3.push_back(sum_date_final);
                break;
            case 5:
                g5.push_back(sum_date_final);
                break;
            case 7:
                g7.push_back(sum_date_final);
                break;
            case 8:
                g8.push_back(sum_date_final);
                break;
            case 1:
                g1.push_back(sum_date_final);
                break;
            case 6:
                g6.push_back(sum_date_final);
                break;
            case 11:
                g1.push_back(sum_date_final);
                break;

            default:
                break;
        }


    //sum of dd
    int dd{0};
    if(sum_date_final == 11){
        cout << "Oops! can't add. 11 is super-special" << endl;
        int eleven = 11;
        g1.push_back(eleven);
    }else{
        int y = input / 1000000;
        while (y != 0){
            dd = dd + y % 10;
            y = y / 10;
        }
        cout << "sum of DD : " << dd << "\n";
    }
    //inserting DD inside grid
    switch(dd){
            case 4:
                g4.push_back(dd);
                break;
            case 9:
                g9.push_back(dd);
                break;
            case 2:
                g2.push_back(dd);
                break;
            case 3:
                g3.push_back(dd);
                break;
            case 5:
                g5.push_back(dd);
                break;
            case 7:
                g7.push_back(dd);
                break;
            case 8:
                g8.push_back(dd);
                break;
            case 1:
                g1.push_back(dd);
                break;
            case 6:
                g6.push_back(dd);
                break;

            default:
                break;
        }



    //print grid values
    cout << endl;
    cout << "Output of G4 begin and end: ";
    for (auto i = g4.begin(); i != g4.end(); ++i)
        cout << *i << " ";

    cout << endl;
    cout << "Output of G9 begin and end: ";
    for (auto i = g9.begin(); i != g9.end(); ++i)
        cout << *i << " ";

    cout << endl;
    cout << "Output of G2 begin and end: ";
    for (auto i = g2.begin(); i != g2.end(); ++i)
        cout << *i << " ";

    cout << endl;
    cout << "Output of G3 begin and end: ";
    for (auto i = g3.begin(); i != g3.end(); ++i)
        cout << *i << " ";

    cout << endl;
    cout << "Output of G5 begin and end: ";
    for (auto i = g5.begin(); i != g5.end(); ++i)
        cout << *i << " ";

    cout << endl;
    cout << "Output of G7 begin and end: ";
    for (auto i = g7.begin(); i != g7.end(); ++i)
        cout << *i << " ";

    cout << endl;
    cout << "Output of G8 begin and end: ";
    for (auto i = g8.begin(); i != g8.end(); ++i)
        cout << *i << " ";

    cout << endl;
    cout << "Output of G1 begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";

    cout << endl;
    cout << "Output of G6 begin and end: ";
    for (auto i = g6.begin(); i != g6.end(); ++i)
        cout << *i << " ";


    return 0;
}
