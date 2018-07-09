#ifndef BOCALSTEROID_HPP
# define BOCALSTEROID_HPP

# include "IAsteroid.hpp"
# include <string>

class BocalSteroid : public IAsteroid
{
public:
	BocalSteroid();
	BocalSteroid(const BocalSteroid& ab);
	virtual ~BocalSteroid();
	BocalSteroid& operator=(const BocalSteroid& ab);

	virtual std::string	getName() const;
	virtual std::string beMined(DeepCoreMiner *l) const;
	virtual std::string beMined(StripMiner *l) const;
};

#endif