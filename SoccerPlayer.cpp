#include "SoccerPlayer.h"
SoccerPlayer::SoccerPlayer() {
	Name = "";
	SurName = "";
	goals = 0;
	assists = 0;
};

SoccerPlayer::SoccerPlayer(std::string fName, std::string fSurName,
	unsigned int fGoals, unsigned int fAssist) {
	Name = fName;
	SurName = fSurName;
	goals = fGoals;
	assists = fAssist;
	//this->name=name;
}
void SoccerPlayer::SetName(std::string fName) { Name = fName; }
void SoccerPlayer::SetSurName(std::string fSurName) { SurName = fSurName; }
void SoccerPlayer::SetGoals(unsigned int fGoals) { goals = fGoals; }
void SoccerPlayer::SetAssist(unsigned int fAssist) { assists = fAssist; }
std::string SoccerPlayer::GetName() {return Name;}
std::string SoccerPlayer::GetSurName() { return SurName; }
unsigned int SoccerPlayer::GetGoals() { return goals; }
unsigned int SoccerPlayer::GetAssist() { return assists; }
void SoccerPlayer::print() {
	std::cout<< Name << ' ' << SurName << " Goals: " << goals << " Assists: " << assists << "/n";
}
void SoccerPlayer::AddGoals(unsigned int fG) {
	goals += fG;
}
void SoccerPlayer::AddAssist(unsigned int fA) {
	assists += fA;
}