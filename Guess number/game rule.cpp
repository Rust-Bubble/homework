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
        std::cout << "按任意键继续";
        char* r = new char;
        *r = getchar();
        delete(r);
        char* t = new char;
        *t = getchar();
        delete(t);
        return ;
    
}