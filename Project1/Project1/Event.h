#pragma once
#include <string>
#include <vector>
#include <ctime>
#include "User.h"
#ifndef EVENT_H
#define EVENT_H

public class Event {
public:
	Event(std::string eventName, std::time_t eventDate);
	std::string getName();
	std::time_t getDate();
	std::string getAvailableTimes();
	void addUser(User u);
	std::vector<User> users;
	//std::vector<User> getUsers();
private:
	std::string name;
	std::time_t date;
};
#endif // !EXECUTIVE_H

