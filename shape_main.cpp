#include <iostream>
#include <limits>
#include "../header/rectangle.hpp"
#include "../header/triangle.hpp"

using namespace std;

void get_rectangleDimensions(int& height, int& width) {
    /* This helper function prompts the user to enter height and width of the rectangle 
    as inputs, and makes sure we get the correct input type and also in range */
    bool wrongInput = true;
    while(wrongInput) {
        cout << "Enter height of the rectangle: ";
        cin >> height;

        if(cin.fail()) {
            cout << "<iostream> operation failed\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if(height < 0) {
            cout << "Height can't be less than 0\n" ;
        } else {
            wrongInput = false;
        }
    }
    wrongInput = true;
    while(wrongInput) {
        cout << "Enter width of the rectangle: ";
        cin >> width;

        if(cin.fail()) {
            cout << "<iostream> operation failed\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if(width < 0) {
            cout << "Width can't be less than 0\n" ;
        } else {
            wrongInput = false;
        }
    }
}

void get_triangleDimensions(int& height, int& base) {
    /* This helper function prompts the user to enter height and base of the triangle 
    as inputs, and makes sure we get the correct input type and also in range */
    bool wrongInput = true;
    while(wrongInput) {
        cout << "Enter height of the triangle: ";
        cin >> height;

        if(cin.fail()) {
            cout << "<iostream> operation failed\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if(height < 0) {
            cout << "Height can't be less than 0\n" ;
        } else {
            wrongInput = false;
        }
    }
    wrongInput = true;
    while(wrongInput) {
        cout << "Enter base of the triangle: ";
        cin >> base;

        if(cin.fail()) {
        cout << "<iostream> operation failed\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if(base < 0) {
            cout << "base can't be less than 0\n" ;
        } else {
            wrongInput = false;
        }
    }
}

int main () {
    char choice;
    int height;
    int base;
    int width;
    bool wrongInput = true;

    while(wrongInput) {
        /* While taking choice of the user, we make sure the input type is correct and the
        value is in range, so the user can only choose a or b */
        cout << "You can choose one of the following shapes:" << endl;
        cout << "a)Rectangle" << endl;
        cout << "b)Triangle" << endl;
        cout << "Enter your choice: ";

        cin >> choice;
        // We check whether the input stream is clear, or else we clear it and retake the input
        if(cin.fail()) {
            cout << "<iostream> operation failed\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if(choice != 'a' && choice != 'b') {
            cout << "Wrong input\n";
        } else {
            wrongInput = false;
        }
    }

    wrongInput = true;

    // We use helper functions to get the correct input values in both cases
    if(choice == 'a') {
        get_rectangleDimensions(height, width);
        Rectangle rect;
        rect.set_height(height);
        rect.set_width(width);

        cout << "Rectangle area: " << rect.area() << endl;
    } else {
        get_triangleDimensions(height, base);
        Triangle tri;
        tri.set_height(height);
        tri.set_base(base);

        cout << "Triangle area: " << tri.area() << endl;
    }

    return 0;
}