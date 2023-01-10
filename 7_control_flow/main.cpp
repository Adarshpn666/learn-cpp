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
    int pen{10};
    int marker{20};
    int sketch{30};
    int pencil{40};
    int rectangle{50};
    int circle{60};
    int square{70};

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
    
    //switch case
    std::cout<<"Switch Case : ...................."<<std::endl;
    
    switch(tool){
        case pen:{
            std::cout << "pen tool is activated " << std::endl;
        }
        break;
        case marker:{
            std::cout << "pen tool is activated " << std::endl;
        }
        break;
        case sketch:{
            std::cout << "pen tool is activated " << std::endl;
        }
        break;
        default:{
            std::cout<<"No match found!"<<std::endl;
        }
    }

    return 0;
}
