#include<iostream>
using namespace std;
class Employee{

   private:
       string emp_name;
       string emp_id;
       double emp_salary;
       string emp_designation;
       string emp_phn_no;

   public:
      Employee(string n,string id,double s,string d,string phn_no){
        emp_name=n;
        emp_id=id;
        emp_salary=s;
        emp_designation=d;
        emp_phn_no=phn_no;
      }
      void setName(string n){
        emp_name=n;
      }
      string getName(){
        return emp_name;
      }

       void setId(string id){
        emp_id=id;
      }
      string getId(){
        return emp_id;
      }
     void setSalary(double s){
          emp_salary=s;
      }
      double getSalary(){
        return emp_salary;
      }
     void setDesignation(string d){
        emp_designation=d;
      }
      string getDesignation(){
        return emp_designation;
      }
       void setPhn_no(string phn_no){
        emp_phn_no=phn_no;
      }
      string getPhn_no(){
        return emp_phn_no;
      }
      void Display(){
      cout<<"=================Employee Details================"<<endl;
      cout<<"Employee Name        :"<< emp_name<<endl;
      cout<<"Employee Id          :"<< emp_id<<endl;
      cout<<"Employee Salary      :"<< emp_salary<<endl;
      cout<<"Employee Designation :"<< emp_designation<<endl;
      cout<<"Employee Phone No    :"<< emp_phn_no<<endl;
      cout<<"====================================="<<endl;

      }
};
int main(){

    Employee E1("Rashed","E121",12500,"Full Time","01832432333");
    Employee E2("Rony","E122",6000,"Half Time","01873432333");

    E1.Display();
    E2.Display();

    return 0;
}
