#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class CarDetail
{
public:
    string ModelName;
    string FuelType, Transmission;
    float ShowroomPrice, TankCapacity, Mileage;
    int seating, Airbags;

    void GetDetailOfCar()
    {
        cout << "Enter ModelName: ";
        cin >> ModelName;
        cout << "Enter FuelType: ";
        cin >> FuelType;
        cout << "Enter Transmission: ";
        cin >> Transmission;
        cout << "Enter ShowroomPrice: ";
        cin >> ShowroomPrice;
        cout << "Enter TankCapacity: ";
        cin >> TankCapacity;
        cout << "Enter Mileage: ";
        cin >> Mileage;
        cout << "Enter seating: ";
        cin >> seating;
        cout << "Enter Airbags: ";
        cin >> Airbags;
//how to use fflush then
        cin.ignore();
    }

    void ListCars()
    {
        cout << ModelName << endl;
    }

    void CarDetailFromNameTitle()
    {
        cout << setw(10) << "Model" << setw(15) << "Fuel Type" << setw(15) << "Showroom Price"
            << setw(15) << "Mileage" << setw(15) << "Transmission" << setw(15) << "Tank Capacity"
            << setw(10) << "Seating" << setw(10) << "Airbags" << endl;
    }

    void CarDetailFromName()
    {
        cout << setw(10) << ModelName << setw(15) << FuelType << setw(15) << ShowroomPrice
            << setw(15) << Mileage << setw(15) << Transmission << setw(15) << TankCapacity
            << setw(10) << seating << setw(10) << Airbags << endl;
    }
};

int main()
{
    CarDetail CarInfo[1000];
    char R;
    int a, n, m, i;
    float k;

    cout << "Enter Number of Cars: ";
    cin >> m;
    cin.ignore();

    for (i = 0; i < m; i++)
    {
        CarInfo[i].GetDetailOfCar();
    }

    do
    {
        n = 0;
        cout << "WELCOME TO TATA MOTORS" << endl;
        cout << "GET THE CAR DETAILS AS PER YOUR PREFERENCE" << endl;
        cout << "(1) Model Name  (2) Fuel Type  (3) Price Range" << endl;
        cout << "ENTER YOUR OPTION: ";
        cin >> a;
        cin.ignore();

        if (a == 1)
        {
            cout << "LIST OF TATA CARS" << endl;
            for (i = 0; i < m; i++)
            {
                cout << "(" << i + 1 << ")" << CarInfo[i].ModelName << endl;
            }
            cout << "CHOOSE YOUR CAR TO GET DETAIL: ";
            cin >> n;
            cin.ignore();
            CarInfo[n - 1].CarDetailFromNameTitle();//class mai se access karne ke liye carinfo use krna padega
            //c mai direct likte toh chalta
            CarInfo[n - 1].CarDetailFromName();
        }
        else if (a == 2)
        {
            cout << "TATA MOTORS ARE AVAILABLE WITH FUEL OPTIONS" << endl;
            cout << "(1) Petrol  (2) Diesel (3) CNG (4) Electric " << endl;
            cout << "ENTER YOUR FUEL PREFERENCE: ";
            cin >> n;
            cin.ignore();
            CarInfo[n - 1].CarDetailFromNameTitle();
            switch (n)
            {
            case 1:
                for (i = 0; i < m; i++)
                {
                    if (CarInfo[i].FuelType == "Petrol")
                    //  if(strcmp(CarInfo[i].FuelType,"Elecric")==0)
                        CarInfo[i].CarDetailFromName();
                }
                break;
            case 2:
                for (i = 0; i < m; i++)
                {
                    if (CarInfo[i].FuelType == "Diesel")
                        CarInfo[i].CarDetailFromName();
                }
                break;
            case 3:
                for (i = 0; i < m; i++)
                {
                    if (CarInfo[i].FuelType == "CNG")
                        CarInfo[i].CarDetailFromName();
                }
                break;
            case 4:
                for (i = 0; i < m; i++)
                {
                    if (CarInfo[i].FuelType == "Electric")
                        CarInfo[i].CarDetailFromName();
                }
                break;
            default:
                cout << "Invalid Input ";
                break;
            }
        }
        else if (a == 3)
        {
            cout << "ENTER YOUR MAXIMUM AFFORDABLE RANGE IN LAKHS: ";
            cin >> k;
            cin.ignore();
            CarInfo[0].CarDetailFromNameTitle(); 
            for (i = 0; i < m; i++)
            {
                if (CarInfo[i].ShowroomPrice <= k)
                    CarInfo[i].CarDetailFromName();
            }
            //no found kaise find karenge ? 
        }

        cout << "Do you want to check details One more time? (y/n): ";
        cin >> R;
        cin.ignore();

    } while (R == 'y' || R == 'Y');

    return 0;
}
