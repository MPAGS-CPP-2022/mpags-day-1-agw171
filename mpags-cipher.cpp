#include <iostream>
#include <vector>
#include <string>
int main(int argc, char* argv[])
{
    const std::vector<std::string> cmdLineArgs{argv,argv+argc};
    for (size_t i{0}; i < cmdLineArgs.size(); i++)
    {
        std::cout << cmdLineArgs[i] << '\n';

        if (cmdLineArgs[i] == "-h" or cmdLineArgs[i] == "--help")
        {
            std::string help_str{"You have requested help for how to run mpags-cipher \n -i specify to use an input file, followed by the input file name \n -o specify the name of the output file"};
            std::cout << help_str << std::endl;
        }
    }
    // char in_char{'x'};
    // std::string out_str{""}; 
    // while(std::cin >> in_char) 
    // {    
    //    if (std::isalpha(in_char)) 
    //     {
    //        out_str += std::toupper(in_char);
    //        continue;
    //     }
    //     switch(in_char)
    //     {
    //        case '1':
    //            out_str = "ONE";
    //        break;
    //        case '2':
    //             out_str = "TWO";
    //         break;
    //         case '3':
    //             out_str = "THREE";
    //         break;
    //         case '4':
    //             out_str = "FOUR";
    //         break;
    //         case '5':
    //             out_str = "FIVE";
    //         break;
    //         case '6':
    //             out_str = "SIX";
    //         break;
    //         case '7':
    //             out_str = "SEVEN";
    //         break;
    //         case '8':
    //             out_str = "EIGHT";
    //         break;
    //         case '9':
    //             out_str = "NINE";
    //         break;
    //         case '0':
    //             out_str = "ZERO";
    //         break;
    //         default:
    //         break;
    //     }
    // }
    //std::cout << out_str << std::endl;
}