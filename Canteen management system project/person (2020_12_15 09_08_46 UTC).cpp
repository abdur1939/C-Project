#include<iostream>
using namespace std;

class Person{
  protected:
      string Name;
      string Id;
      string Phn_num;
      string Address;
  public:
  string setPerson(string n,string id,string Phn_no,string add){

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



};
class Customer : public Person
{

   public:
    Customer(string c_n,string c_id,string c_phn_no){
       Name=c_n;
       Id=c_id;
       Phn_num=c_phn_no;
    }
     void setName(string c_n){
       Name=c_n;
    }
   string getName(){
     return Name;
   }

    void setId(string c_id){
       Id=c_id;
    }
   string getId(){
     return Id;
   }

    void setPhn_no(string c_phn_no){
    Phn_num=c_phn_no;
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



