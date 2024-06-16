#include "Programa.hpp"

void Programa::setAction(ProgramAction action) {
	this->action = action;
}

ProgramAction Programa::getAction() const
{
	return this->action;
}

void Programa::executed()
{
	int opcion = 0;
	switch (this->action)
	{
	case createPro:
		std::cout << "creando un profesor " << std::endl;

		this->action = SelectOption;
		break;
	case createStu:
		std::cout << "creando un estudiante " << std::endl;

		this->action = SelectOption;
		break;
	case listProfs:
		std::cout << "listando los profesores " << std::endl;

		this->action = SelectOption;
		break;
	case listStudents:
		std::cout << "listando los estudiantes " << std::endl;

		this->action = SelectOption;
		break;
	case SelectOption:
		std::cout << "\nIngrese una opción de menú " << std::endl;
		std::cout << "1(CREAR PROFESOR) 2(CREAR ESTUDIANTE) 3(LISTAR PROFESORES) 4(LISTAS ESTUDIANTES) 0(SALIR): ";

		std::cin >> opcion;
		if (opcion < 0 || opcion > 4) {
			opcion = 0; // cerrar el sistema
		}
		this->action = (ProgramAction)opcion;
	default: 
		break;
	}
}
