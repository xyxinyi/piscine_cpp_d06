#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

# include "IMiningLaser.hpp"

class StripMiner : public IMiningLaser
{
private:
public:
	StripMiner();
	StripMiner(const StripMiner& sm);
	
	virtual				~StripMiner();
	StripMiner&			operator=(const StripMiner& sm);

	virtual void		mine(IAsteroid *a);
};

#endif