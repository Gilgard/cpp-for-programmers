#pragma once
#include <string>

using namespace std;

class Commodity {
  public:
    Commodity(const string &name_, int id_, double price_);
    const string &get_name() const;
    int get_id() const;
    double get_price(double quatity) const;
    void set_price(double price_);
    double get_price_with_sales_tax(double quantity) const;
    
  private:
    string name;
    int id;
    double price;
};