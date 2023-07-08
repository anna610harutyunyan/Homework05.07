#include <iostream>
#include <string>

class Car {
public:
    enum Colour {
        red,
        black,
        white,
        yellow,
        green,
        gray,
        blue,
        purple,
        pink,
        brown
    };

private:
    Colour m_colour;

public:
    static std::string enum_to_string(Colour m_colour) {
        switch (m_colour) {
            case red:
                return "Red";
            case black:
                return "Black";
            case white:
                return "White";
            case yellow:
                return "Yellow";
            case green:
                return "Green";
            case gray:
                return "Gray";
            case blue:
                return "Blue";
            case purple:
                return "Purple";
            case pink:
                return "Pink";
            case brown:
                return "Brown";
            default:
                return "Unknown colour";
        }
    }

    static Colour string_to_enum(const std::string& initColour) {
        if (initColour == "Red")
            return red;
        else if (initColour == "Black")
            return black;
        else if (initColour == "White")
            return white;
        else if (initColour == "Yellow")
            return yellow;
        else if (initColour == "Green")
            return green;
        else if (initColour == "Gray")
            return gray;
        else if (initColour == "Blue")
            return blue;
        else if (initColour == "Purple")
            return purple;
        else if (initColour == "Pink")
            return pink;
        else if (initColour == "Brown")
            return brown;
        else
            return brown ; 
    }

    Car() {
        std::cout << __func__ << std::endl;
    }

    Car(Colour colour) : m_colour(colour) {
        std::cout << __func__ << std::endl;
    }

    Colour get_colour() const {
        return m_colour;
    }

    ~Car() {
        std::cout << __func__ << std::endl;
    }
};

int main() {
    Car car;
    std::cout << Car::enum_to_string(Car::blue) << std::endl;
    Car car1(Car::blue);
    std::cout << car1.get_colour() << std::endl;

    Car::Colour enumValue = Car::string_to_enum("Blue");
    std::cout << enumValue << std::endl;

    return 0;
}
