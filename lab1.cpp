#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
// Created by John Prokopias Youkhana from CIS 242

void findProfit() {
    int x, y;
    float profit;
    char answer = 'y';
    cout << "Avenue Bakery"<< endl;
    cout << "_ _ _ _ _ _ _\n\n" << endl;
    cout << "Apple Pies and Apple Tarts:\n" << endl;
    cout << "Production Scheduling Program:\n\n" << endl;
    cout << " the production constraints are:\n" << endl;
    cout << " 12x + 4y <= 156 Ounces of Fruit" << endl;
    cout << " 7x + 3y <= 116 Ounces of Dough" << endl;
    cout << "\n\n";
    cout << " where x equals the number of pies" << endl;
    cout << " and y equals the number of tarts\n" << endl;
    do {
        cout << "Please enter number of pies" << endl;
        cin >> x;
        cout << "Please enter number of tarts" << endl;
        cin >> y;
        if((12*x+y*4 <= 156) && (7*x+3*y <=116)) {
            cout << "The production schedule is feasible" << endl;
            profit = x*3 + y*1.5;
            cout << "and the profit yielded by this schedule is $"
                 << setiosflags(ios::fixed | ios::showpoint)
                 << setprecision(2) << profit << endl;
                 if (profit < 20) {
                    cout << "\nprofit is less than $20" << endl;
                    cout << "Please consider better sales tactics in the future" << endl;
                 }
        }
        else {
            cout << "\nproduction schedule is not feasible\n" << endl;
        }
        cout << "\nEnter another production schedule?" << endl;
        cout << "type Y for Yes or N for No" << endl;
        cin >> answer;
        system("CLS");
    } while(answer == 'Y' || answer == 'y');
}

int main() {
    findProfit();
    return 0;
}
