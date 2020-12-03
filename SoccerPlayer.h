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

	//Конструктор с параметарми
	SoccerPlayer(std::string,std::string, unsigned int, unsigned int);
	void SetName(std::string);
	void SetSurName(std::string);
	void SetGoals(unsigned int);
	void SetAssist(unsigned int);
	std::string GetName();
	std::string GetSurName();
	unsigned int GetGoals();
	unsigned int GetAssist();
	void print();
	void AddGoals(unsigned int);
	void AddAssist(unsigned int);

};