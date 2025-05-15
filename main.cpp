#include <iostream>
#include <chrono>
#include <thread>
#include "src/bit_converter.h"

int main()
{
    while (!std::cin.fail())
    {
        std::cout<<"Enter a boolean (all non 1 characters are treated as 0) array:\n";
        std::string line;
        std::getline(std::cin,line);

        size_t size =  line.length();
        if(size<=0) break;
        size=micont::math::min(size,sizeof(int)*8);
        bool* bits=new bool[size];
        for (int i=0;i<size;i++) bits[i]=line[i]=='1';
        int value = micont::bitwise::from_bits<int>(bits, size);
        std::cout<<value<<'\n';


        // std::cin >> value;
        // size_t size = 0;
        // char character = micont::bitwise::bitwise_cast<int,char>(value);
        // std::cout<<"=\""<<character<<"\"\n";
    }

    // for(int i=0;i<128;i++){
    //     std::this_thread::sleep_for(std::chrono::milliseconds(100));
    //     std::cout<<i<<'='<<micont::bitwise::bitwise_cast<int,char>(i)<<"\n";
    // }
    
    return 0;
}