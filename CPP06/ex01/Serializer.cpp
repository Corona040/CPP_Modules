#include "Serializer.hpp"

Serializer::Serializer(void) {}

Serializer::Serializer(const Serializer &s) {
	(void)s;
}

Serializer &(Serializer::operator=)(Serializer s) {
	(void)s;
	return (*this);
}

Serializer::~Serializer(void) {}

uintptr_t	Serializer::serialize(Serializer::Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Serializer::Data	*Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Serializer::Data *>(raw));
}
