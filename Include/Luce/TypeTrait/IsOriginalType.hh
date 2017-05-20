#ifndef LUCE_HEADER_TYPETRAIT_ISORIGINALTYPE_HH
#define LUCE_HEADER_TYPETRAIT_ISORIGINALTYPE_HH
#include <Luce/Configuration.hh>

#include <Luce/Utility/NonComparable.hh>
#include <Luce/Utility/NonCopyable.hh>

namespace Luce
{
	namespace TypeTrait
	{
		template<typename Ty_>
		struct IsOriginalType LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			LUCE_MACRO_CONSTEXPR static bool Value
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= false
#endif
				;
		};
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<typename Ty_>
		bool IsOriginalType<Ty_>::Value = false;
#endif
		template<>
		struct IsOriginalType<char> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			LUCE_MACRO_CONSTEXPR static bool Value
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= true
#endif
				;
		};
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<>
		bool IsOriginalType<char>::Value = true;
#endif
		template<>
		struct IsOriginalType<signed char> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			LUCE_MACRO_CONSTEXPR static bool Value
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= true
#endif
				;
		};
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<>
		bool IsOriginalType<signed char>::Value = true;
#endif
		template<>
		struct IsOriginalType<unsigned char> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			LUCE_MACRO_CONSTEXPR static bool Value
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= true
#endif
				;
		};
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<>
		bool IsOriginalType<unsigned char>::Value = true;
#endif
		template<>
		struct IsOriginalType<short> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			LUCE_MACRO_CONSTEXPR static bool Value
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= true
#endif
				;
		};
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<>
		bool IsOriginalType<short>::Value = true;
#endif
		template<>
		struct IsOriginalType<signed short> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			LUCE_MACRO_CONSTEXPR static bool Value
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= true
#endif
				;
		};
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<>
		bool IsOriginalType<signed short>::Value = true;
#endif
		template<>
		struct IsOriginalType<unsigned short> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			LUCE_MACRO_CONSTEXPR static bool Value
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= true
#endif
				;
		};
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<>
		bool IsOriginalType<unsigned short>::Value = true;
#endif
		template<>
		struct IsOriginalType<int> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			LUCE_MACRO_CONSTEXPR static bool Value
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= true
#endif
				;
		};
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<>
		bool IsOriginalType<int>::Value = true;
#endif
		template<>
		struct IsOriginalType<signed int> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			LUCE_MACRO_CONSTEXPR static bool Value
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= true
#endif
				;
		};
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<>
		bool IsOriginalType<signed int>::Value = true;
#endif
		template<>
		struct IsOriginalType<unsigned int> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			LUCE_MACRO_CONSTEXPR static bool Value
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= true
#endif
				;
		};
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<>
		bool IsOriginalType<unsigned int>::Value = true;
#endif
		template<>
		struct IsOriginalType<long> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			LUCE_MACRO_CONSTEXPR static bool Value
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= true
#endif
				;
		};
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<>
		bool IsOriginalType<long>::Value = true;
#endif
		template<>
		struct IsOriginalType<signed long> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			LUCE_MACRO_CONSTEXPR static bool Value
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= true
#endif
				;
		};
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<>
		bool IsOriginalType<signed long>::Value = true;
#endif
		template<>
		struct IsOriginalType<unsigned long> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			LUCE_MACRO_CONSTEXPR static bool Value
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= true
#endif
				;
		};
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<>
		bool IsOriginalType<unsigned long>::Value = true;
#endif
		template<>
		struct IsOriginalType<long long> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			LUCE_MACRO_CONSTEXPR static bool Value
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= true
#endif
				;
		};
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<>
		bool IsOriginalType<long long>::Value = true;
#endif
		template<>
		struct IsOriginalType<unsigned long long> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			LUCE_MACRO_CONSTEXPR static bool Value
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= true
#endif
				;
		};
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<>
		bool IsOriginalType<unsigned long long>::Value = true;
#endif
		template<>
		struct IsOriginalType<float> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			LUCE_MACRO_CONSTEXPR static bool Value
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= true
#endif
				;
		};
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<>
		bool IsOriginalType<float>::Value = true;
#endif
		template<>
		struct IsOriginalType<double> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			LUCE_MACRO_CONSTEXPR static bool Value
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= true
#endif
				;
		};
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<>
		bool IsOriginalType<double>::Value = true;
#endif
		template<>
		struct IsOriginalType<long double> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			LUCE_MACRO_CONSTEXPR static bool Value
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= true
#endif
				;
		};
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<>
		bool IsOriginalType<long double>::Value = true;
#endif
		template<>
		struct IsOriginalType<wchar_t> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			LUCE_MACRO_CONSTEXPR static bool Value
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= true
#endif
				;
		};
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<>
		bool IsOriginalType<wchar_t>::Value = true;
#endif
	}
}

#endif