#include <iostream>
#include <string>

class car {
public:
    std:: string brand;
    std:: string color;
    int year;

    void startEngine(){
        std:: cout << "The" << color << "" << brand << "'s engine is now running!"<< std::endl;
    }
};

int main ()
{
    car mycar;
    mycar.brand = "Toyota";
    mycar.color = "Red";
    mycar.year = 2023;

    car friendsCar;
    friendsCar.brand = "Tesla";
    friendsCar.color = "Blue";
    friendsCar.year = 2024;

    mycar.startEngine();
    friendsCar.startEngine();

    return 0;
}