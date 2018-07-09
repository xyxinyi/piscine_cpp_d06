#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

# include "IMiningLaser.hpp"
# include "IAsteroid.hpp"

class MiningBarge
{
	private:
		IMiningLaser	*_lasers[4];
	public:
		MiningBarge();
		~MiningBarge();
		MiningBarge(const MiningBarge& mb);
		MiningBarge& operator=(const MiningBarge& mb);

		void		equip(IMiningLaser *l);
		void		mine(IAsteroid *a) const;
};

#endif