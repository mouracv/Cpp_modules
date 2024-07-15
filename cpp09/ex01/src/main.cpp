#include "../include/RPN.hpp"

void RPN(std::string arg)
{
    if (std::find_if(arg.begin(), arg.end(), checkChar) != arg.end())
        return err(4);

    std::istringstream box(arg);
    std::stack<int> dataStack;
    std::string value;

    while (true)
    {

        box >> value;
        if (box.fail())
            break;
        if (value.size() != 1)
            return err(4);
        
        std::cout << " value: "<< value << std::endl;
        
        if (!isTokenOpr(value[0]))
            dataStack.push(value[0] - '0');
        else if (calculator(dataStack, value[0]))
            return;

    }
    
    if (dataStack.size() != 1)
        return;
    else
        std::cout << "result: " << dataStack.top() << std::endl;


}

int main(int ac, char **av)
{
    if (ac != 2 || !av[1][0])
        return(err(1), 1);
    
    RPN(av[1]);
    return(0);
}
