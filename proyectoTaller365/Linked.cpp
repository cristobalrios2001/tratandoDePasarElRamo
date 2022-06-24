#include "Linked.hpp"

Linked::Linked() {
	this->header = nullptr;
}
void Linked::addNodo(Persona persona) {
	Nodo* nodo = new Nodo();
	nodo->setPersona(persona);
	if (this->header == nullptr) {
		this->header = nodo;
	}
	else {
		Nodo* current = this->header;
		while (current->getNext() != nullptr) {
			current = current->getNext();
		}
		current->setNext(nodo);
	}
}
int Linked::getSize() {
	Nodo* aux = this->header;
	int cont = 0;
	while (aux->getNext() != nullptr) {
		cont++;
		aux = aux->getNext();
	}
	return cont;
}
void Linked::show() {
	if (this->header == NULL) {
		cout << " Lista vacia" << endl;
	}
	else {
		Nodo* temp = this->header;
		while (temp != NULL) {
			cout << temp->getPersona().getID() << endl;
			temp = temp->getNext();
		}
	}
}

Linked ::~Linked() {

}