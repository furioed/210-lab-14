// COMSC-210 | Lab 14 | Mamadou Sissoko
// IDE used: Visual Studio Code
// Description: Color class with RGB values, getters, setters, validation, and print method

#include <iostream>
#include <iomanip>
using namespace std;

const int WIDTH = 3; // Field width for printing

class Color {
private:
    int red;
    int green;
    int blue;

public:
    // Constructor: initializes color components with validation
    Color(int r = 0, int g = 0, int b = 0) {
        setRed(r);
        setGreen(g);
        setBlue(b);
    }

    // Getters for red, green, blue
    int getRed() const { return red; }
    int getGreen() const { return green; }
    int getBlue() const { return blue; }

    // Setters for red, green, blue with validation
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
    // Single red color
    Color redColor(255, 0, 0);

    // Print header for table
    cout << "Red   Green   Blue\n";
    cout << "-------------------\n";

    redColor.print();

    return 0;
}
