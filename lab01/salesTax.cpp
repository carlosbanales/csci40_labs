#include <iostream>
#include <cmath>
#include <ios> // for fixed
#include <iomanip> // for setprecision

using namespace std;

int main() {
  double price;
  double totalPrice;
  double salesTax;
  const double taxRate = 0.0775;

  cout << "Enter the price: ";
  cin >> price;

  salesTax = round((taxRate * price) * 10) / 10;
  totalPrice = round((price + salesTax) * 10) / 10;

  cout << "  $" << fixed << setprecision(2) << price << endl;
  cout << "+ $" << fixed << setprecision(2) <<  salesTax << endl;
  cout << "==========" << endl << "  $";
  cout << fixed << setprecision(2) << totalPrice << endl;

  return 0;
}
