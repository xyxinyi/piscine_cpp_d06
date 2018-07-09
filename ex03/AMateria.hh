#ifndef AMATERIA_H_
# define AMATERIA_H_

# include "ICharacter.hh"
# include <string>

class AMateria
{
	private:
		std::string		_type;
		unsigned int	_xp;

	AMateria();

	public:
	AMateria(const std::string& type);
	AMateria(const AMateria& m);
	AMateria&	operator=(const AMateria& m);
	virtual ~AMateria();

	const std::string	&getType() const;
	unsigned int 		getXP() const;

	virtual AMateria* 	clone() const = 0;
	virtual void 		use(ICharacter& target);
};

#endif
