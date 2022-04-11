#include<iostream>
using namespace std;
int main(){
    int returnTotalBill(void);
    int total_bill  = returnTotalBill();
    cout<<"Your total bill amount is : "<<total_bill<<endl;
    cout<<"Thank you for the order!"<<endl;
}
int returnTotalBill(){
    char c, item, veg_item, non_veg_item, select_again;
    int  bill_amount;
    cout<<"------------------------------ Welcome to online Food Order ------------------------------"<<endl;
    cout<<"------------------------------ Please follow below instructions --------------------------"<<endl;
    cout<<"Step 1 : Please press s to start your order"<<endl;
    cout<<"Step 2 : You can order both Veg and Non-veg items"<<endl;
    cout<<"Step 3 : Please press v to select veg items"<<endl;
    cout<<"Step 4 : Please press n to select non-veg items"<<endl;
    cout<<"Step 5 : You will get final bill after your order"<<endl;
    cin>>c;
    start:
    if(c == 's' || c == 'S'){
        items:
        cout<<"Please select your choice"<<endl;
        cout<<"(v)Veg items             (n)Non-veg items"<<endl;
        cin>>item;
        if (item == 'v' || item == 'V'){
            veg_item_list:
            cout<<"1.  Paneer : Price -> 150"<<endl;
            cout<<"2.  Pav Bhaji : Price -> 80"<<endl;
            cout<<"3.  Sandwich : Price -> 60"<<endl;
            cout<<"4.  Paper dosa : Price -> 90"<<endl;
            cout<<"5.  Masala dosa : Price -> 75"<<endl;
            cout<<"6.  Kachori(sweet) : Price -> 60"<<endl;
            cout<<"7.  Dahi wada : Price -> 70"<<endl;
            cout<<"8.  Kaju Curry : Price -> 155"<<endl;
            cout<<"9. Veg-manchurian : Price -> 125"<<endl;
            cout<<"Please select your favourite food"<<endl;
            cin>>veg_item;
            if(veg_item == '1'){
                bill_amount = bill_amount + 150;
            }
            else if(veg_item == '2'){
                bill_amount = bill_amount + 80;
            }
            else if(veg_item == '3'){
                bill_amount = bill_amount + 60;
            }
            else if(veg_item == '4'){
                bill_amount = bill_amount + 90;
            }
            else if(veg_item == '5'){
                bill_amount = bill_amount + 75;
            }
            else if(veg_item == '6'){
                bill_amount = bill_amount + 60;
            }
            else if(veg_item == '7'){
                bill_amount = bill_amount + 60;
            }
            else if(veg_item == '8'){
                bill_amount = bill_amount + 70;
            }
            else if(veg_item == '9'){
                bill_amount = bill_amount + 155;
            }
            else{
                cout<<"You have entered wrong value, please try again! ";
                goto veg_item_list;
            }
            cout<<"Do you want to add more items [y/n] "<<endl;
            cin>>select_again;
            if(select_again == 'y' || select_again == 'Y'){
                goto items;
            }
            else{
                return bill_amount;
            }
        }
        else if(item == 'n' || item == 'N'){
            non_veg_item_list:
            cout<<"1.  Chicken biryani : Price -> 210"<<endl;
            cout<<"2.  Mutton biryani : Price -> 150"<<endl;
            cout<<"3.  Chilli chicken : Price -> 260"<<endl;
            cout<<"4.  Chicken tikka kabab : Price -> 240"<<endl;
            cout<<"5.  Egg fried rice : Price -> 230"<<endl;
            cout<<"6.  Chicken fried rice : Price -> 330"<<endl;
            cout<<"7.  Tandori chicken(half) : Price -> 140"<<endl;
            cin>>non_veg_item;
            if(non_veg_item == '1'){
                bill_amount = bill_amount + 210;
            }
            else if(non_veg_item == '2'){
                bill_amount = bill_amount + 150;
            }
            else if(non_veg_item == '3'){
                bill_amount = bill_amount + 260;
            }
            else if(non_veg_item == '4'){
                bill_amount = bill_amount + 240;
            }
            else if(non_veg_item == '5'){
                bill_amount = bill_amount + 230;
            }
            else if(non_veg_item == '6'){
                bill_amount = bill_amount + 330;
            }
            else if(non_veg_item == '7'){
                bill_amount = bill_amount + 140;
            }
            else{
                cout<<"You have entered wrong value, please try again! ";
                goto non_veg_item_list;
            }
            cout<<"Do you want to add more items [y/n] "<<endl;
            cin>>select_again;
            if(select_again == 'y' || select_again == 'Y'){
                goto items;
            }
            else{
                return bill_amount;
            }
        }
        else{
            cout<<"You have entered wrong value, please try again! ";
            goto items;
        }
    }
    else{
        cout<<"You have entered wrong value, please enter s!"<<endl;
        goto start;
    }
    return bill_amount;
}
