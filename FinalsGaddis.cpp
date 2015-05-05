// p225 ex. 23

#include <iostream>
#include <cstdlib>

using namespace std;

void circle();
void triangle();
void rectangle();

int main()
{

    int choice;

    do
    {
        cout << "Menu" << endl;
        cout << "\n\t1. Calculate Area of a circle " << endl;
        cout << "\n\t2. Calculate Area of a rectangle " << endl;
        cout << "\n\t3. Calculate Area of a triangle " << endl;
        cout << "\n\t4. Quit " << endl;



    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            circle();
            break;
        case 2:
            rectangle();
            break;
        case 3:
            triangle();
            break;
        case 4:
            break;
        default:
            cout << "\n\tInvalid input!" << endl;
    }

    }while (choice != 4);

    return 0;
}

void circle()
{
    double radius, area;
    const double pi = 3.14159;

    cout << "\n\tEnter radius: ";
    cin >> radius;

    area = pi * (radius*radius);

    cout << "\n\tArea: " << area << endl;
}

void rectangle()
{
    double length, width, area;

    cout << "\n\tEnter length and width (Space separated): ";
    cin >> length >> width;

    area = (length*width);

    cout << "\n\tArea: " << area << endl;
}

void triangle()
{
    double length, width, area;

    cout << "\n\tEnter length and width (Space separated): ";
    cin >> length >> width;

    area = (length*width)/2;

    cout << "\n\tArea: " << area << endl;
}
