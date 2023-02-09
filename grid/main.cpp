#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int num;
    cin >> num;

    vector<int> g4, g9, g2;
    vector<int> g3, g5, g7;
    vector<int> g8, g1, g6;


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
            cout << "beyond limit !!!";
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
