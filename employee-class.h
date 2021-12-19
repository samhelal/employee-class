/*( Employee Class) Create a class called Employee
that includes three pieces of information as data members—a first
name (type string ), a last name (type string ) and a monthly
salary (type int ). Your class should have a constructor that
initializes the three data members. Provide a set and a get
function for each data member. If the monthly salary is not
positive, set it to 0 . Write a test program that demonstrates
class Employee ’s capabilities. Create two Employee objects and
display each object’s yearly salary. Then give each
10 percent raise and display each Employee ’s again.(c++ how to program)*/
// class display name and salary

#include <string>

class employee {

    public:

    employee (std::string firstName  , std::string lastName , int monthlySalary )
    :fName(firstName){
        lName = lastName ;
        if(monthlySalary >= 0){
            salary = monthlySalary ;
        }
        if( monthlySalary < 0 ){
            salary = 0 ; //If the monthly salary is not positive, set it to 0 .
        }
    }

        void setFirstName(std::string employeeName){
            fName = employeeName ;
        }

        void setLastName (std::string familyName){
            lName = familyName ;
        }

        void setMonthlySalary(int salaryPerMonth){
            if( salaryPerMonth >= 0 ){
                salary = salaryPerMonth ;
            }
            if( salaryPerMonth < 0 ){
                salary = 0 ;  //If the monthly salary is not positive, set it to 0 .
            }
        }

        std::string getFirstName () const {
            return fName ;
        }

        std::string getLastName() const {
            return lName ;
        }

        int getMonthlySalary () const {
            return salary ;
        }

        int getYearlySalary () const {
            int salaryPerYear = salary * 12 ;
            return salaryPerYear ;
        }

    private :
    std::string fName ;
    std::string lName ;
    int salary ;
};