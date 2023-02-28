#include<iostream>
using namespace std;

class Person{
  public:
      string Name;
      string Id;
      string Phn_num;
      string Address;
 /* public:
  void setPerson(string n,string id,string Phn_no,string add){

      Name=n;
      Id=id;
      Phn_num=Phn_no;
      Address=add;
    }
    string getPerson(){
      return Name;
      return Id;
      return Phn_num;
      return Address;
    }
    */


};
class customer : public person
{

   public:
    Customer(string n,string id,string phn_no){
       Name=n;
       Id=id;
       Phn_num=phn_no;
    }
     void setName(string n){
       Name=n;
    }
   string getName(){
     return Name;
   }

    void setId(string id){
       Id=id;
    }
   string getId(){
     return Id;
   }

    void setPhn_no(string phn_no){
    Phn_num=phn_no;
    }
   string getPhn_no(){
     return Phn_num;
   }

     void showDetails(){
     cout<<"======================================="<<endl;
     cout<<"Customer Name      :"<<Name<<endl;
     cout<<"Customer Id        :"<<Id<<endl;
     cout<<"Customer Phone No  :"<<Phn_num<<endl;
     cout<<"======================================="<<endl;


   }


};
int main(){
    Customer c1("Rakib","c101","12345654344");
    Customer c2("Sakib","c102","12345634444");

       c1.showDetails();
        c2.showDetails();
}



