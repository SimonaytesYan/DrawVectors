#ifndef SYM_SUB_WINDOW
#define SYM_SUB_WINDOW

#include <SFML/Graphics.hpp>
#include <cmath>

class SubWindow : public sf::RenderTexture
{
    double x0;
    double y0;

    public : 
    SubWindow(double X0, double Y0, double weight, double height) : 
    x0 (X0),
    y0 (Y0)
    { this->create(weight, height); }

    ~SubWindow()
    {
        x0 = NAN;
        y0 = NAN;
        this->~SubWindow();
    }

    void Draw(sf::RenderWindow* window);
};

#endif  //SYM_SUB_WINDOW