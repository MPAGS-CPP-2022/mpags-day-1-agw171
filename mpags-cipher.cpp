#include <iostream>
#include <string>
int main()
{
    char in_char{'x'};
    std::string out_str{""}; 

    while(std::cin>>in_char)
    {
        std::cout << in_char <<std::endl;
    }

    return 0;
}