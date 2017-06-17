#ifndef LUCE_HEADER_RANDOM_DETAIL_WELLIMPL_HH
#define LUCE_HEADER_RANDOM_DETAIL_WELLIMPL_HH

namespace Luce
{
	namespace Random
	{
		namespace Detail
		{
			template<typename ResultTy_>
			ResultTy_ Well512_Next_(ResultTy_(&seed)[16], ResultTy_& seed_index,
									ResultTy_(&z)[3])
			{
				z[0] = seed[
					(seed_index + static_cast<ResultTy_>(15)) & static_cast<ResultTy_>(0xF)];
				z[1] = (seed[seed_index] ^ (seed[seed_index] << static_cast<ResultTy_>(16))) ^
					(seed[(seed_index + static_cast<ResultTy_>(13)) &
					 static_cast<ResultTy_>(0xF)] ^ (seed[(seed_index +
														   static_cast<ResultTy_>(13)) &
													 static_cast<ResultTy_>(0xF)] <<
													 static_cast<ResultTy_>(15)));
				z[2] = seed[(seed_index + static_cast<ResultTy_>(9)) &
					static_cast<ResultTy_>(0xF)] ^ (seed[(seed_index + static_cast<ResultTy_>(9))
													& static_cast<ResultTy_>(0xF)] >>
													static_cast<ResultTy_>(11));
				seed[seed_index] = z[1] ^ z[2];
				seed[(seed_index + static_cast<ResultTy_>(15)) & static_cast<ResultTy_>(0xF)] =
					(z[0] ^ (z[0] << 2)) ^ (z[1] ^ (z[1] << static_cast<ResultTy_>(18))) ^
					(z[2] << static_cast<ResultTy_>(28)) ^
					(seed[seed_index] ^ ((seed[seed_index] << static_cast<ResultTy_>(5)) &
										 static_cast<ResultTy_>(0xDA442D24)));
				seed_index = (seed_index + static_cast<ResultTy_>(15)) &
					static_cast<ResultTy_>(0xF);
				
				return seed[seed_index];
			}
		}
	}
}

#endif