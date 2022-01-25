#include <bits/stdc++.h>
using namespace std;

void solve(double meal_cost, int tip_percent, int tax_percent)
{
    double tip = (meal_cost * tip_percent / 100);
    double tax = (meal_cost * tax_percent) / 100;

    double total_cost = meal_cost + tip + tax;

    int total_bill = round(total_cost);

    cout << total_bill << endl;
}
int main()
{
}