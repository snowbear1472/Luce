#include <Luce/Threading/Mutex.hh>

#if LUCE_MACRO_IS_WINDOWS
#include <Windows.h>

namespace Luce
{
	namespace Threading
	{
		struct Mutex::Data_
		{
			HANDLE Handle_;
		};

		Mutex::Mutex()
		{
			Value_ = new Mutex::Data_;
			Value_->Handle_ = CreateMutex(NULL, FALSE, NULL);
		}
		Mutex::~Mutex()
		{
			CloseHandle(Value_->Handle_);
			delete Value_;
		}

		void Mutex::Lock()
		{
			WaitForSingleObject(Value_->Handle_, INFINITE);
		}
		void Mutex::Unlock()
		{
			ReleaseMutex(Value_->Handle_);
		}
		bool Mutex::TryLock()
		{
			if (WaitForSingleObject(Value_->Handle_, 0) == WAIT_OBJECT_0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		void* Mutex::NativeHandle()
		{
			return Value_->Handle_;
		}
	}
}
#endif