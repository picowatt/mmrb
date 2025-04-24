
#include <mmrb/RingBuffer.h>

namespace mmrb {

	template <typename T>
	RingBuffer<T>::RingBuffer(size_t capacity)
		:capacity(capacity)
	{
	}

	template <typename T>
	bool RingBuffer<T>::write(const T& item)
	{
		return true;
	}

	template <typename T>
	bool RingBuffer<T>::write(const void* data, size_t size)
	{
		return true;
	}

	template <typename T>
	bool RingBuffer<T>::read(T& item)
	{
		return true;
	}

	template <typename T>
	bool RingBuffer<T>::read(void* out, size_t size)
	{
		return true;
	}

	template <typename T>
	bool RingBuffer<T>::peek(T& item) const
	{
		return true;
	}

	template <typename T>
	bool RingBuffer<T>::empty() const
	{
		return true;
	}

	template <typename T>
	bool RingBuffer<T>::full() const
	{
		return true;
	}

	template <typename T>
	bool RingBuffer<T>::clear()
	{
		return true;
	}
}