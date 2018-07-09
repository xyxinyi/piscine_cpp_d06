#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
private:
public:
	Cure();
	virtual ~Cure();
	Cure(const Cure& c);
	Cure& operator=(const Cure& c);

	virtual AMateria 	*clone() const;
	virtual void 		use(ICharacter& target);
};

#endif