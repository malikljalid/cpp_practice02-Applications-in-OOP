#include <iostream>

template <class data> class clsCalculator
{
    private:
    data _Number1;
    data _Number2;

    public:
    clsCalculator(data Number1, data Number2)
    {
        _Number1 = Number1;
        _Number2 = Number2;
    }

    data add(void)
    {
        return (_Number1 + _Number2);
    }

    data sub(void)
    {
        return (_Number1 - _Number2);
    }

    data div(void)
    {
        return (_Number1 / (double)_Number2);
    }

    data mul(void)
    {
        return (_Number1 * _Number2);
    }

    void printResult(void)
    {
        std::cout << _Number1 << " + " << _Number2 << " = " << add() << std::endl;
        std::cout << _Number1 << " - " << _Number2 << " = " << sub() << std::endl;
        std::cout << _Number1 << " * " << _Number2 << " = " << mul() << std::endl;
        std::cout << _Number1 << " / " << _Number2 << " = " << div() << std::endl;
    }
};

int main(void)
{
    clsCalculator <int>     intCalc(13, 20);
    clsCalculator <float>   floatCalc(1.01, 6.6);

    intCalc.printResult();
    floatCalc.printResult();

    return (0);
}
