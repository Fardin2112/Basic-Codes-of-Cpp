#include<iostream>
using namespace std;

// class ClassName         // ClassName is user defined function 
// {
//      Access specifier   // it could be private , public or protected
//      Data Memeber       // Variable to be used
//      Memebr function    // Method access to data memebr   
// } ;                     // class Name end with semicolon


// vechile is user defined function 
class Vechile {
    // access specifier 
    public:
        //Data Member
        string VechileName;
        string Vechiletype ;
        string VechileColour;
        float price ;
    // Memeber function
    void PrintVechile (){
        cout << "Vechile Name : " << VechileName <<
                "\nVechile Type : " <<  Vechiletype << 
                "\nVechile Colour : " << VechileColour << 
                "\nprice in Lakhs : " << price <<endl;
                
    }
};

int main(){
    // declare an object of class vechile1
    Vechile vechile1;
    // accessing data memeber
    vechile1.VechileName = "1960 Mustang";
    vechile1.Vechiletype = "luxury sports car";
    vechile1.VechileColour = "Black";
    vechile1.price = 90;
    //accessing memeber function
    vechile1.PrintVechile();

    cout << "  "<<endl;

    Vechile vechile2;
    vechile2.VechileName = "Swift";
    vechile2.Vechiletype = "supermini car";
    vechile2.VechileColour = "white";
    vechile2.price = 6;
    vechile2.PrintVechile();

    cout << "  "<<endl;

    // You can use only one data memeber also 
    // or call direct without using memeber function
    Vechile vechile3;
    vechile3.VechileName = "Ferrai";
    cout<< vechile3.VechileName <<endl;

    return 0 ;
}