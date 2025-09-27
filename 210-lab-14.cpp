// COMSC-210 | Lab 14 | Mamadou Sissoko
// IDE used: Visual Studio Code
// Description: Color class with RGB values, getters, setters, validation, and print method

#include <iostream>
#include <iomanip>
using namespace std;

const int WIDTH = 3; // Field width for printing

class Color {
private:
    int red;    // Red component (0-255)
    int green;  // Green component (0-255)
    int blue;   // Blue component (0-255)

public:
    // Constructor with default values and validation
    Color(int r = 0, int g = 0, int b = 0) {
        setRed(r);
        setGreen(g);
        setBlue(b);
    }

    // Getters for red, green, blue
    int getRed() const { return red; }
    int getGreen() const { return green; }
    int getBlue() const { return blue; }

    // Setters with validation
    void setRed(int r) { red = (r >= 0 && r <= 255) ? r : 0; }
    void setGreen(int g) { green = (g >= 0 && g <= 255) ? g : 0; }
    void setBlue(int b) { blue = (b >= 0 && b <= 255) ? b : 0; }

    // Print method: displays RGB values in a neat row
    void print() const {
        cout << setw(WIDTH) << red << "   "
             << setw(WIDTH) << green << "   "
             << setw(WIDTH) << blue << endl;
    }
};

int main() {
    // Create Color objects
    Color redColor(255, 0, 0);
    Color greenColor(0, 255, 0);
    Color blueColor(0, 0, 255);

    // Print table header
    cout << "Red   Green   Blue\n";
    cout << "-------------------\n";

    // Print the RGB values using the object's print method
    redColor.print();
    greenColor.print();
    blueColor.print();

    return 0;
}
