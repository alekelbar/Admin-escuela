#pragma once
#include <iostream>

enum ProgramAction {
	close,
	createPro,
	createStu,
	listProfs,
	listStudents,
	SelectOption,
};


class Programa {
private:
	ProgramAction action;

public:
	Programa(ProgramAction action)
	{
		this->action = action;
	}

	void setAction(ProgramAction action);

	ProgramAction getAction() const;

	void executed();
};