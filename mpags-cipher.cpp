#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    const std::string version{"0.0.1"};
    const std::vector<std::string> cmdLineArgs{argv,argv+argc};
    for (size_t i{0}; i < cmdLineArgs.size(); i++)
    {
        std::cout << cmdLineArgs[i] << '\n';
    }
    for (size_t i{0}; i < cmdLineArgs.size(); i++)
    {
        if (cmdLineArgs[i]== "--version")
        {
            std::cout << "current version: " << version << std::endl;
        }
        
        if (cmdLineArgs[i] == "-h" or cmdLineArgs[i] == "--help")
        {
            std::string help_str{"You have requested help for how to run mpags-cipher \n -i specify to use an input file, followed by the input file name \n -o specify the name of the output file"};
            std::cout << help_str << std::endl;
        }
        if (cmdLineArgs[i]== "-i")
        {
            if (cmdLineArgs[i+1][0] =='-')
            {
                std::cout << "Error - please specify an input file name after -i" << std::endl; 
                return(1);
            }
            else
            {
            std::cout << "Input file:" <<cmdLineArgs[i+1] << std::endl;
            }
        }
        if (cmdLineArgs[i]== "-o")
        {
            if (cmdLineArgs[i+1][0] =='-')
            {
                std::cout << "Error - please specify an output file name after -o" << std::endl; 
                return(1);
            }
            else
            {
                std::cout << "Output file:" <<cmdLineArgs[i+1] << std::endl;
            }
        }

    }
     char in_char{'x'};
     std::string out_str{""}; 
     std::cout<<"Please type text, hit Ctrl + D when done to transliterate"<<std::endl;
    while(std::cin >> in_char) 
     {    
       if (std::isalpha(in_char)) 
        {
           out_str += std::toupper(in_char);
           continue;
        }
        switch(in_char)
        {
           case '1':
               out_str = "ONE";
           break;
           case '2':
                out_str = "TWO";
            break;
            case '3':
                out_str = "THREE";
            break;
            case '4':
                out_str = "FOUR";
            break;
            case '5':
                out_str = "FIVE";
            break;
            case '6':
                out_str = "SIX";
            break;
            case '7':
                out_str = "SEVEN";
            break;
            case '8':
                out_str = "EIGHT";
            break;
            case '9':
                out_str = "NINE";
            break;
            case '0':
                out_str = "ZERO";
            break;
            default:
            break;
        }
    }
    std::cout << out_str << std::endl;
}