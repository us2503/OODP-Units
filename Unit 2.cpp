//Unit2


#include <iostream>
#include <string>
using namespace std;
class Product {
private:
    string name;
    float price;
public:
    Product() {
        name = "None";
        price = 0.0;
    }
    Product(string n, float p) {
        name = n;
        price = p;
    }
    void display() {
        cout << name << " " << price << endl;
    }
};
int main() {
    Product p1;
    Product p2("Laptop", 50000);
    p1.display();
    p2.display();
    return 0;
}


// #include <iostream>
// using namespace std;
// class Product {
// private:
//     float price;
// public:
//     Product(float p) {
//         price = p;
//     }
//     Product(const Product &p) {
//         price = p.price;
//     }
//     void display() {
//         cout << "Price: " << price << endl;
//     }
// };
// int main() {
//     Product p1(1000);
//     Product p2 = p1;   
//     p1.display();
//     p2.display();
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class Product {
// public:
//     float calculateCost(float price, int qty) {
//         return price * qty;
//     }
//     float calculateCost(float price, int qty, float delivery) {
//         return price * qty + delivery;
//     }
// };
// int main() {
//     Product p;
//     cout << "Cost1: " << p.calculateCost(100, 2) << endl;
//     cout << "Cost2: " << p.calculateCost(100, 2, 50) << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class Product {
// private:
//     float price;
// public:
//     Product(float p) {
//         price = p;
//     }
//     Product operator+(const Product &p) {
//         return Product(price + p.price);
//     }
//     void display() {
//         cout << "Total Price: " << price << endl;
//     }
// };
// int main() {
//     Product p1(1000), p2(2000);
//     Product total = p1 + p2;
//     total.display();
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class Product {
// public:
//     ~Product() {
//         cout << "Product object destroyed" << endl;
//     }
// };
// int main() {
//     Product p;
//     return 0;
// }