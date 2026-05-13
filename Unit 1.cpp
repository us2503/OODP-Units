//Unit1
// #include <iostream>
// using namespace std;
// class Employee {
// private:
//     int empID;
//     string name;
//     float basicSalary, grossSalary;
// public:
//     void read() {
//         cout << "Enter ID, Name, Basic Salary: ";
//         cin >> empID >> name >> basicSalary;
//     }
//     void calculate() {
//         grossSalary = basicSalary + 0.2 * basicSalary + 0.1 * basicSalary;
//     }
//     void display() {
//         cout << "\nID: " << empID;
//         cout << "\nName: " << name;
//         cout << "\nGross Salary: " << grossSalary << endl;
//     }
// };
// int main() {
//     Employee e1, e2;
//     e1.read();
//     e1.calculate();
//     e1.display(); 
//     e2.read();
//     e2.calculate();
//     e2.display();
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int n, total = 0;
//     cout << "Enter number of students: ";
//     cin >> n;
//     int marks[n];   
//     for(int i = 0; i < n; i++) {
//         cout << "Enter marks of student " << i + 1 << ": ";
//         cin >> marks[i];
//         total += marks[i];
//     }
//     float avg = total / (float)n;
//     cout << "Average = " << avg << endl;
//     if(avg >= 80) cout << "Grade A";
//     else if(avg >= 60) cout << "Grade B";
//     else if(avg >= 40) cout << "Grade C";
//     else cout << "Grade D";
//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;
// class Account {
// private:
//     int accNo;
//     string name;
//     float balance;
//     static int count;   
// public:
//     void read() {
//         cout << "Enter AccNo, Name, Balance: ";
//         cin >> accNo >> name >> balance;
//         count++;
//     }
//     void display() {
//         cout << accNo << " " << name << " " << balance << endl;
//     }
//     static void showCount() {
//         cout << "Total Accounts: " << count << endl;
//     }
// };
// int Account::count = 0;
// int main() {
//     Account a1, a2;
//     a1.read();
//     a2.read();
//     a1.display();
//     a2.display();
//     Account::showCount();
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class Book {
// public:
//     int id;
//     string title;
//     float price;
//     void read() {
//         cout<<"Enter id, title and price: ";
//         cin >> id >> title >> price;
//     }
//     void display() {
//         cout << id << " " << title << " " << price;
//     }
// };
// int main() {
//     Book *b = new Book;
//     b->read();
//     b->display();
//     delete b;
//     return 0;
// }


#include <iostream>
using namespace std;

class Bank {
private:
    float balance;

public:
    Bank() { balance = 0; }

    void deposit(float amt) {
        balance += amt;
    }

    void withdraw(float amt) {
        if(amt <= balance)
            balance -= amt;
        else
            cout << "Insufficient Balance\n";
    }

    void show() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Bank b;
    int choice;
    float amt;

    do {
        cout << "\n1.Deposit 2.Withdraw 3.Balance 4.Exit\n";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Amount: ";
                cin >> amt;
                b.deposit(amt);
                break;

            case 2:
                cout << "Amount: ";
                cin >> amt;
                b.withdraw(amt);
                break;

            case 3:
                b.show();
                break;
        }
    } while(choice != 4);

    return 0;
}

