
#include <iostream> //cout; cin
#include <string>  // string

int main() 
{
        //{1} testing gitpod
        // std::cout << "test message" << std:: endl;
        std::cout << "test" << std::endl;

        //{2} testing address
        int year {2022}; // declaring a variable
        std::cout << "Variable value: " << year << std::endl;
        std::cout << "Variable address: " << &year << std::endl;

        //{3}
        std::string msg {"Hello World!"};
        std::string* p_msg {&msg};
        std::cout << "Variable value: " << msg << std::endl;
        std::cout << "Variable address: " << &msg << std::endl;
        std::cout << "pointer value: " << p_msg << std::endl;

        //{4} Excersice
        std::string saby {"Where am I!"};
        std::string* pointter {&saby};
        

}

