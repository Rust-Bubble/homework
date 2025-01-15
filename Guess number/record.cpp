#include"head.h"
void record(mood md)
{
	
	std::ofstream appfile("score.txt", std::ios::app);
	std::ofstream outfile("game record.txt", std::ios::trunc);
	if (!appfile||!outfile) {
		std::cerr << "error" << std::endl;
		return ;
	}
	if(md.type==1)appfile << md.score <<std::endl;
	outfile << md.lv << std::endl
		<< md.m << std::endl
		<< md.max << std::endl
		<< md.score << std::endl
		<< md.time << std::endl
		<< md.type << std::endl
		<< md.ans_[0] << std::endl
		<< md.ans_[1] << std::endl
		<< md.ans_[2] << std::endl;
	appfile.close();
	outfile.close();
	return;
}
