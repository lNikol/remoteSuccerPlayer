#pragma once
#include <string>
class SoccerPlayer {
private:
	std::string Name;
	std::string SurName;
	unsigned int goals;
	unsigned int assists;
public:
	SoccerPlayer();
	void SetName(std::string);
	void SetSurName(std::string);
	void SetGoals(unsigned int);
	void SetAssist(unsigned int);
	std::string GetName();
	std::string GetName();
	unsigned int GetGoals(unsigned int);
	unsigned int GetAssist(unsigned int);
	void print();
	void AddGoals(unsigned int);
	void AddAssist(unsigned int);

};