#include <iostream>
#include <map>

int main()
{
    std::map<int, int> frequency;
    int in;
    int most_frequent = 0;
    int prediction = 0;

    // read the input numbers from the user
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Enter a number from 1 to 10: ";
        std::cin >> in;

        
        frequency[in]++;

        
        if (frequency[in] > frequency[most_frequent])
        {
            most_frequent = in;
        }
    }

    
    prediction = most_frequent;

    std::cout << "The most frequent number is: " << most_frequent << std::endl;
    std::cout << "The next expected input is: " << prediction << std::endl;

    return 0;
}