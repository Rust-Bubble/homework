#include"head.h"
void search()
{
	std::ifstream infile("score.txt", std::ios::in);
	if (!infile ) {
		std::cerr << "error" << std::endl;
		return;
	}
	std::string line;
    bool p = 0;
    while (std::getline(infile, line))
    {
        std::stringstream ss;
        ss << line;
        if (!ss.eof()) {
            int temp;
            while (ss >> temp) {
                std::cout << temp << std::endl;
                p = 1;
            }
        }
    }
    if (p == 0)std::cout << "暂无历史记录"<<std::endl;
    std::cout << "按b键返回" << std::endl;
    char r ;
    std::cin >> r;
   if(r=='b') menu_main();
   infile.close();
    return;
}