#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
#include "MiningBarge.hpp"
#include "IAsteroid.hpp"
#include "AsteroBocal.hpp"
#include "BocalSteroid.hpp"

int	main(void)
{
	DeepCoreMiner 	dcm;
	StripMiner		sm;
	MiningBarge 	mb;
	mb.equip(&dcm);
	mb.equip(&sm);
	for (int i = 0; i < 4; ++i)
	{
		IAsteroid *a = 0;
		if (i % 2 == 0)
			a = new AsteroBocal();
		else
			a = new BocalSteroid();
		mb.mine(a);
		delete a;
	}
	return 0;
}