#include <iostream>

int main()
{
    std::cout << std::endl
              << "IF and ELSE-IF statements ----------------------------------------------------------------------------------------------------------> " << std::endl;

    /**
     * if statement is conditional statement if condition is satisfied then statement is executed.
     *
     */

    int number_1{10};
    int number_2{30};
    if (number_1 < number_2)
    {
        std::cout << number_1 << " is smaller than " << number_2 << std::endl;
    }
    if (number_1 > number_2)
    {
        std::cout << number_1 << " is greater than " << number_2 << std::endl;
    }
    if (number_1 == number_2)
    {
        std::cout << number_1 << " is equal than " << number_2 << std::endl;
    }

    bool red{false};
    bool yellow{false};
    bool green{true};
    bool police_stop{true};
    if (red)
    {
        std::cout << "Stop " << std::endl;
    }
    if (yellow)
    {
        std::cout << "Slow Down " << std::endl;
    }
    if (green)
    {
        if (!police_stop == false)
            std::cout << "GOOOOO...... " << std::endl;
    }

    // checking multiple conditions
    if (green && police_stop)
    {
        std::cout << "police Stopped " << std::endl;
    }

    // else statements
    std::cout << "else if statements ........." << std::endl;
    // tools
    // we are using const for switch case.
    const int pen{10};
    const int marker{20};
    const int sketch{30};
    const int pencil{40};
    const int rectangle{50};
    const int circle{60};
    const int square{70};

    int tool{marker};

    if (tool == pen)
    {
        std::cout << "pen tool is activated " << std::endl;
    }
    else if (tool == marker)
    {
        std::cout << "marker tool is activated " << std::endl;
    }
    else if (tool == sketch)
    {
        std::cout << "sketch tool is activated " << std::endl;
    }
    else if (tool == pencil)
    {
        std::cout << "pencil tool is activated " << std::endl;
    }
    else if (tool == rectangle)
    {
        std::cout << "rectangle tool is activated " << std::endl;
    }
    else if (tool == circle)
    {
        std::cout << "circle tool is activated " << std::endl;
    }
    else if (tool == square)
    {
        std::cout << "square tool is activated " << std::endl;
    }

    // switch case
    /**
     * @brief
     * switch case can be only value in integer value and enum ex: int, long, unsigned int etc....
     * The case statements require integral value which must be known at compile-time,
     * which is what is meant by constant here. But the const members of a class are not really
     * constant in that sense. They're are simply read-only.
     *
     */
    std::cout << "Switch Case : ...................." << std::endl;

    switch (tool)
    {
    case pen:
    {
        std::cout << "pen tool is activated " << std::endl;
    }
    break;
    case marker:
    {
        std::cout << "marker tool is activated " << std::endl;
    }
    break;
    case sketch:
    {
        std::cout << "sketch tool is activated " << std::endl;
    }
    break;
    default:
    {
        std::cout << "No match found!" << std::endl;
    }
    }

    // what  would happen if we remove the break statement from the switch.
    // it will excute all the statement after where the condition is satisfied
    std::cout << "Switch Case without break : ...................." << std::endl;

    switch (tool)
    {
    case pen:
    {
        std::cout << "pen tool is activated " << std::endl;
    }

    case marker:
    {
        std::cout << "marker tool is activated " << std::endl;
    }

    case sketch:
    {
        std::cout << "sketch tool is activated " << std::endl;
    }

    default:
    {
        std::cout << "No match found!" << std::endl;
    }
    }

    std::cout << std::endl
              << "Short Circuit Evaluations ----------------------------------------------------------------------------------------------------------> " << std::endl;

    std::cout << std::endl
              << "Integral Logic Conditions ----------------------------------------------------------------------------------------------------------> " << std::endl;

    std::cout << std::endl
              << "Ternary Operators ----------------------------------------------------------------------------------------------------------> " << std::endl;

    std::cout << std::endl
              << "If constexpr ----------------------------------------------------------------------------------------------------------> " << std::endl;

    std::cout << std::endl
              << "If with Initializer ----------------------------------------------------------------------------------------------------------> " << std::endl;
    std::cout << std::endl
              << "Switch with Initializer ----------------------------------------------------------------------------------------------------------> " << std::endl;
    std::cout << std::endl
              << "Variable Scope Revisited ----------------------------------------------------------------------------------------------------------> " << std::endl;
    std::cout << std::endl
              << "Switch Scope ----------------------------------------------------------------------------------------------------------> " << std::endl;

    return 0;
}
