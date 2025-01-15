#include"head.h"
mood con_game(void)
{
	struct mood md;
    md.lv = 0;
    md.m = 0;
    md.max = 0;
    md.score = 0;
    md.time = 0;
    md.type = 0;
    md.ans_[0] = 0;
    md.ans_[1] = 0;
    md.ans_[2] = 0;
	std::ifstream infile("game record.txt", std::ios::in);
	if (!infile) {
		std::cerr << "error" << std::endl;
		return md;
	}
	std::string line;
	int t = 0;
	while (std::getline(infile, line))
	{
		t++;
		std::stringstream ss;
		ss << line;
        if (t <= 9) {
            int temp;
            ss >> temp;
            switch (t)
            {
            case 1:md.lv = temp;
                break;
            case 2:md.m = temp;
                break;
            case 3:md.max = temp;
                break;
            case 4:md.score = temp;
                break;
            case 5:md.time = temp;
                break;
            case 6:md.type = temp;
                break;
            case 7: md.ans_[0] = temp;
                break;
            case 8:md.ans_[1] = temp;
                break;
            case 9:md.ans_[2] = temp;
                break;

            }

        }
	}
    infile.close();
	return md;
}
