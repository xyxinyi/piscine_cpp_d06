#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

# include "IMiningLaser.hpp"

class DeepCoreMiner : public IMiningLaser
{
private:
public:
	DeepCoreMiner();
	virtual ~DeepCoreMiner();
	DeepCoreMiner(const DeepCoreMiner& dcm);
	DeepCoreMiner& operator=(const DeepCoreMiner& dcm);

	virtual void		mine(IAsteroid *a);
};

#endif