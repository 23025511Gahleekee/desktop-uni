#include <iostream>
 using namespace std;
  double calculateMarkup(double merchandiseCost,double storeRent,double employeeSalary,double electricity)
    double totalExpenses = merchandiseCost + storeRent + employeeSalary + electricity;
    double profit = totalExpenses * 0.1;
    double salePrice = merchandiseCost + profit;
    double markedUpPrice = salePrice/ 0.85 ;
    double markedUpPercentage =(markedUpPrice-merchandiseCost)/merchandiseCost * 100;


    int main(){
       double merchandiseCost,storeRent,employeeSalary,electricity;
    cout<<"Enter cost of Merchandise:";
    cin>>merchandiseCost;

    cout<<"Enter employee salary:";
    cin>>employeeSalary;

    cout<<"Enter store rent:";
    cin>>storeRent;

    cout<<"Enter electricity cost:";
    cin>>electricity;

    double markedUpPercentage= calculateMarkup(merchandiseCost,storeRent,employeeSalary,electricity);
    cout<<"Mark up merchandise by:"<<markedUpPercentage<<"%";

    return 0;

    }
