#ifndef IMININGLASER_H_
# define IMININGLASER_H_

# include "IAsteroid.hh"

class IMiningLaser
{
public:
	virtual			~IMiningLaser() {}
	virtual void	mine(IAsteroid *a) = 0;
};

#endif
