#include<iostream>
using namespace std;

class Person{
  protected:
      string Name;
      string Id;
      string Phn_num;
      string Address;
  public:
  Person(string n,string id,string Phn_no,string add){

      Name=n;
      Id=id;
      Phn_num=Phn_no;
      Address=add;
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
     void setPhn_num(string phn_no){
    Phn_num=phn_no;
    }
    string getPhn_num(){
    return Phn_num;
    }
     void setAddress(string add){
    Address=add;
    }
    string getAddress(){
    return Address;
    }

};
class Customer : public Person
{
    protected:
    string c_n;
    string c_id;
    string c_phn_no;

   public:

    Customer(string cn,string cid,string cphn_no):Person(string n,string id,string Phn_no,string add){

       c_n=cn;
      c_id=cid;
       c_phn_no=cphn_no;
    }

     void setName(string cn){
       c_n=cn;
    }
   string getName(){
     return c_n;
   }

    void setId(string cid){
       c_id=cid;
    }
   string getId(){
     return c_id;
   }

    void setPhn_no(string cphn_no){
    c_phn_no=cphn_no;
    }
   string getPhn_no(){
     return c_phn_no;
   }
   void showDetails(){
     cout<<"======================================="<<endl;
     cout<<"Customer Name      :"<< c_n<<endl;
     cout<<"Customer Id        :"<< c_id<<endl;
     cout<<"Customer Phone No  :"<< c_phn_no<<endl;
     cout<<"Name:"<<Name<<endl;
     cout<<"Id:"<<Id<<endl;
     cout<<"Phn_num:"<<Phn_num<<endl;
     cout<<"Address:"<<Address<<endl;
     cout<<"======================================="<<endl;


   }
};
class Teacher : public Customer, public Person{
 protected:
    string t_n;
    string t_id;
    string t_phn_nom;

   public:
     void setTeacher(string tn,string tid,string tPhn_nom){
       t_n=tn;
       t_id=tid;
     t_phn_nom=tPhn_nom;

       }
     void setName(string tn){
       t_n=tn;
    }
   string getName(){
     return t_n;
   }

    void setId(string tid){
       t_id=tid;
    }
   string getId(){
     return t_id;
   }

    void setPhn_no(string tPhn_nom){
      t_phn_nom=tPhn_nom;

    }
      string getPhn_no(){
     return t_phn_nom;
   }
   void showDetails1(){
     cout<<"======================================="<<endl;
     cout<<"Teacher Name      :"<< t_n<<endl;
     cout<<"Teacher Id        :"<< t_id<<endl;
     cout<<"Teacher Phone No  :"<< t_phn_nom<<endl;
     cout<<"======================================="<<endl;
   }

   };





int main(){

     Teacher t1;
     t1.setName("Nazmul Hossain");
     t1.setId("T-17-2");
     t1.setPhn_no("014737737377");



     t1.showDetails1();
     //t2.showDetails1();



}



