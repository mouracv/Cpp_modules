#include "../include/RPN.hpp"


// int isToken(char c)
// {
//     std::cout << "istoken (" << c << ")" << std::endl;
//     if (c == '+' || c == '/' || c == '-' || c == '*')
//         return(1);
//     return(0);
// }

// void err(int opc)
// {
//     std::cout << RED;
//     if (opc == 1)
//         std::cerr << RED << "Error: Invalid argument💀.\n";
//     else if (opc == 2)
//         std::cerr << RED << "Error: Invalid division for 0.\n";
//     else if (opc == 3)
//         std::cerr << RED << "Error: Not enougth numbers for calculation.\n";
//     else
//         std::cerr << RED << "Error: Invalid character1.\n";

//     std::cout << END;
// }

// int calculator(std::stack<int>& datastack, char opt)
// {
//     if (datastack.size() < 2)
//         return(err(3), 1);
    
//     int res = 0;
//     int first = datastack.top();
//     datastack.pop();
//     int sec = datastack.top();
//     datastack.pop();

//     std::cout << "opt " << opt << std::endl;
//     switch (opt)
//     {
//         case '+':
//             res = sec + first;
//             datastack.push(res);  
//             break;
        
//         case '-':
//             res = sec - first;
//             datastack.push(res);  
//             break;
        
//         case '*':
//             res = sec * first;
//             datastack.push(res);  
//             break;
        
//         case '/':
//         {
//             if (first == 0)
//                 return(err(2), 1);
//             res = sec / first;
//             datastack.push(res);  
//             break;
//         }
//         default:
//             break;
//     }
//     return(0);
// }

// void RPN(char* arg)
// {
//     // std::istringstream box(arg);
//     std::stack<int> dataStack;

//     int value;

//     for (size_t i = 0; arg[i] != '\0'; i++)
//     {
//         std::cout << "args: " << arg[i] << std::endl;
//         if (isdigit(arg[i]) && !isdigit(arg[i + 1]))
//         {
//             value = static_cast<int>(arg[i]);
//             std::cout << i << " | " << value << std::endl;
//             dataStack.push(value);
//         }
//         else if (isToken(arg[i]) && calculator(dataStack, arg[i]))
//             return;
//         else if (!isspace(arg[i]))
//             return(err(4));
//     }
//     std::cout << dataStack.top() << std::endl;
//     dataStack.pop();
// }

// int main(int ac, char **av)
// {
//     if (ac != 2 || !av[1][0])
//         return(err(1), 1);
    
//     RPN(av[1]);
//     return(0);
// }
