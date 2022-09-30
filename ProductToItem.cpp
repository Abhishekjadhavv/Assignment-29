// 3. Create a Product class and convert Product type to Item type using constructor
#include <iostream>
using namespace std;
class Product
{
private:
    int pro_num, pro_id;

public:
    void setData(int n, int i)
    {
        pro_num = n;
        pro_id = i;
    }
    int getProNum()
    {
        return pro_num;
    }

    int getProId()
    {
        return pro_id;
    }

    void display()
    {
        cout << "Pro_num = " << pro_num << " Pro_Id = " << pro_id << endl;
    }
};

class Item
{
private:
    int item_num, item_id;

public:
    Item()
    {
        item_id = 0;
        item_num = 0;
    }

    Item(Product p)
    {
        item_num = p.getProNum();
        item_id = p.getProId();
    }

    void display()
    {
        cout << "ItemNum = " << item_num << " ItemId = " << item_id << endl;
    }
};

int main()
{
    Item i1;
    Product p1;
    p1.setData(3, 4);
    i1 = p1;
    p1.display();
    i1.display();
    return 0;
}