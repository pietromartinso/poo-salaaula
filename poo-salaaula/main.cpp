#include <iostream>
#include <string>
#include <list>

#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "SalaAula.hpp"

#include<list>

int main() {
	SalaAula sala{ "Lab Info 1", 20 };

	Pessoa prof1{ "João", 40 };
	Disciplina dis1{ "Orientacao a Objetos", &sala };
	dis1.setProfessor(&prof1);

	Pessoa prof2{ "Maria", 30 };
	Disciplina dis2{ "Sistemas Operacionais", &sala };
	dis2.setProfessor(&prof2);

	sala.adicionarDisciplina(&dis1);
	sala.adicionarDisciplina(&dis2);

	std::cout << dis1.getSalaAula()->getNome() << std::endl;
	std::list<Disciplina*> dis{ sala.getDisciplinas() };
	std::list<Disciplina*>::iterator it{ dis.begin() };
	for (; it != dis.end(); it++) {
		std::cout << (*it)->getNome() << std::endl;
	}

	return 0;
}
