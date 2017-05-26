#ifndef LUCE_HEADER_AI_LAYER_HH
#define LUCE_HEADER_AI_LAYER_HH
#include <Luce/Configuration.hh>

#include <Luce/AI/AIObject.hh>
#include <Luce/AI/Perceptron.hh>

namespace Luce
{
	namespace AI
	{
		template<typename Elem_>
		class Layer : public AIObject
		{
		public:
			virtual ~Layer();
		};
	}
}

#include <Luce/Internal/AI/Layer_.hh>
#endif