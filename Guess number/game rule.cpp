#include"head.h"
void rules()
{
    
        std::string line;
        std::ifstream infile("rule.txt", std::ios::in);
        if (!infile) {
            std::cerr << "error!" << std::endl;
            return ;
        }
     
        while (std::getline(infile, line))
        {
            std::cout << line << std::endl;
        }
        infile.close();
        std::cout << "�����������";
        char* r = new char;
        *r = getchar();
        delete(r);
        char* t = new char;
        *t = getchar();
        delete(t);
        return ;
    
}