# include <iostream>
# include <string>
using namespace std;

class DepartmentalStore{
    int itemID[100], PriceID[100], quantity[100];
    public :
    int counter;
    void intitcount() {counter = 0;}
    void accept();
    void billing();
};
   void DepartmentalStore :: accept(){
    cout << "Enter the item ID : ";
    cin >> itemID[counter];
    cout << "Enter the price for that item : ";
    cin >> PriceID[counter];
    cout << "Enter required Quantity of that item : ";
    cin >> quantity[counter];
    counter++;
}
    void DepartmentalStore :: billing(){
    cout << "Billing Status for your Order" << endl;
    for (int i = 0; i < counter; i++ ){
        cout << "Item ID : " << itemID[i] << " Price : " << PriceID[i] << " Total Price : " << PriceID[i]*quantity[i] << endl;
    }
}
int main (){
    int a;
    cout << "Total Number of Orders : ";
    cin >> a;
    DepartmentalStore KFC;
    KFC.intitcount();
    for (int j = 0; j < a; j++){
        KFC.accept();
    }
    KFC.billing();
    
return 0;
}