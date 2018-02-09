#pragma once
#include <string>
#include <vector>
#include "User.h"
#include <ctime>
#ifndef EVENT_H
#define EVENT_H

public class Event {
public:
	Event(std::string eventName, std::time_t eventDate);
	std::string getName();
	std::time_t getDate();
	std::string getAvailableTimes();
	std::vector<User> users;
	void addUser(User u);
private:
	std::string name;
	std::time_t date;
};
#endif // !EXECUTIVE_H

