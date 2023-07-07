#include <iostream>
#include <string>

enum Colour
{
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

class Car 
{
private:
Colour m_colour;
public:
	std::string enum_to_string( Colour m_colour)
	{
		switch ( m_colour)
		{
		case red:
			return "Red";
			break;
		case black:			
			return "Black";
			break;
		case white:
			return "White";
			break;
		case yellow:		
			return "Yellow";
			break;
		case green:
			return "Green";
			break;
		case gray:
			return "Gray";
			break;
		case blue:
			return "Blue";
			break;
		case purple:
			return "Purple";
			break;
		case pink:
			return "Pink";
			break;
		case brown:
			return "Brown";
			break;
		default:
			return "Unknown colour";
			break;
		}
	}


	Car() 
	{
		std::cout << __func__ << std::endl;
	}
	Car(Colour m_colour):m_colour(m_colour)
	{
	    std::cout <<__func__<<std::endl;
	}
	Colour get_number()const
	{
	    return m_colour;
	}

	~Car()
	{
		std::cout << __func__ << std::endl;
	}
};

int main(int argc, char** argv)
{
	Car car;
	std::cout <<car.enum_to_string(blue) << std::endl;
	Car car1(blue);
	std::cout <<car1.get_number() <<std::endl;
	return 0;
}