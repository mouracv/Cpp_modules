#include "../include/RPN.hpp"

bool isTokenOpr(char c)
{
    // std::cout << "istoken (" << c << ")" << std::endl;
    if (c == '+' || c == '/' || c == '-' || c == '*')
        return(1);
    return(0);
}

void err(int opc)
{
    std::cerr << RED;

    if (opc == 1)
        std::cerr << "Error: Invalid argument💀.\n";
    else if (opc == 2)
        std::cerr << "Error: Invalid division for 0.\n";
    else if (opc == 3)
        std::cerr << "Error: Not enougth numbers for calculation.\n";
    else if (opc == 4)
        std::cerr << "Error: Invalid character.\n";
    else
        std::cerr << "Error: Not enougth operators.\n";

    std::cerr << END;
}

bool checkChar(char c)
{
    return !(isdigit(c) || isTokenOpr(c) || c == ' ');
}

int calculator(std::stack<int>& datastack, char opt, int& flag)
{
    if (datastack.size() < 2)
        return(err(3), 1);
    
    flag++;
    int res = 0;
    int first = datastack.top();
    datastack.pop();
    int sec = datastack.top();
    datastack.pop();

    std::cout << "operation: " << sec << " " << opt  << " " << first << " = ";
    switch (opt)
    {
        case '+':
            res = sec + first;
            datastack.push(res);  
            break;
        
        case '-':
            res = sec - first;
            datastack.push(res);  
            break;
        
        case '*':
            res = sec * first;
            datastack.push(res);  
            break;
        
        case '/':
        {
            if (first == 0)
                return((std::cerr << std::endl), err(2), 1);
            res = sec / first;
            datastack.push(res);  
            break;
        }
        default:
            break;
    }
    std::cout << res << std::endl;
    return(0);
}

void RPN(std::string arg)
{
    if (std::find_if(arg.begin(), arg.end(), checkChar) != arg.end())
        return err(4);

    std::istringstream box(arg);
    std::stack<int> dataStack;
    std::string value;
    int operatorFlag = 0;;

    while (true)
    {
        box >> value;
        if (box.fail())
            break;
        if (value.size() != 1)
            return err(4);
                
        if (!isTokenOpr(value[0]))
            dataStack.push(value[0] - '0');
        else if (calculator(dataStack, value[0], operatorFlag))
            return;
    }
    
    if (dataStack.size() == 1 && operatorFlag > 0)
        std::cout << "Result: " << dataStack.top() << std::endl;
    else
        return err(5);

}
