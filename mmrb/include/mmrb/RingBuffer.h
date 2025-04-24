#pragma once

namespace mmrb {

	template <typename T>
	class RingBuffer {
	protected:
		size_t capacity;

	public:
		RingBuffer(size_t capacity)
			: capacity(capacity)
		{
		};

		virtual ~RingBuffer() = default;

	protected:
		bool write(const T& item)
		{
			return true;
		}

		bool write(const void* data, size_t size)
		{
			return true;
		}

		bool read(T& item)
		{
			return true;
		}

		bool read(void* out, size_t size)
		{
			return true;
		}

		bool peek(T& item) const
		{
			return true;
		}

		bool empty() const
		{
			return true;
		}

		bool full() const
		{
			return true;
		}

		bool clear()
		{
			return true;
		}
	};
}