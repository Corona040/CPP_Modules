#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <cstddef>
# include <stdint.h>

class Serializer {
	public:
		struct Data {
			int	data;
		};

		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);
	
	private:
		Serializer(void);
		Serializer(const Serializer &s);
		Serializer &(operator=)(Serializer s);
		~Serializer(void);
};

#endif
