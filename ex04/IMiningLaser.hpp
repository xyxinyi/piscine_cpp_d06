#ifndef IMININGLASER_HPP
# define IMININGLASER_HPP

# include "IAsteroid.hpp"

class IMiningLaser
{
public:
	virtual			~IMiningLaser() {}
	virtual void	mine(IAsteroid *a) = 0;
};

#endif